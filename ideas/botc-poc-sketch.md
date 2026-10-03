# Blood on the Clocktower in Arma 3: proof-of-concept sketch

Status: implemented in [botc.cup_chernarus_A3/](../botc.cup_chernarus_A3/README.md) and playtested, working well. Deviations from this sketch:

- **Superseded:** the mission now implements the full Trouble Brewing script (22 characters) for 5–15 players, see the mission README. The notes below describe the original PoC scope (5–9 players, 11 characters).
- The PoC was capped at 5–9 players, and the cast added Saint and Drunk so the Outsider slots could be filled.
- No `CfgRemoteExec` whitelist (it could clash with ACE/CBA). Server functions validate the sender with `remoteExecutedOwner` instead.
- Bot mode is folded into the "Automatic Storyteller" parameter plus a "fill with bots" parameter.
- Only living players can be nominated, and votes are collected in parallel.
- Added a real day/night cycle (sunrise on waking, sunset before each night) that the sketch only listed as a "day/night" row. Details in the mission README.
- Night mute uses the ACRE global volume only; the Arma text channels are disabled separately.
- The Storyteller is not an ACRE spectator. The ACRE2 source shows spectators join the dead channel, so they hear the living but are heard only by other spectators, which would leave the Storyteller unable to address the town. This supersedes the spectator row in section 2.

## TL;DR

- **Build a standalone MP mission, not a mod.** It needs no new assets of its own (ACRE2 is a dependency for voice, see section 2), and it fits this repo: `template/` plus a `modules/botc/` function module in the style of `grad-loadout`.
- **Keep the human Storyteller (ST).** The mission is a *grimoire and communications tool*, not a rules engine. It handles bookkeeping, secret delivery and the phase clock. It does not adjudicate. This is what makes the scope small: BotC's rules are full of "the Storyteller may decide...", and a human resolves those for free.
- **Arma gives you three things for free:** a physical town to walk around, proximity voice (via ACRE2) for private day conversations, and a server that can keep secrets.
- **The PoC is about 9 roles, 5–7 players and one map.** It proves the framework (secret roles, night queue, nominations, execution, win check), not the content.
- **Legal:** The Pandemonium Institute's [Community Created Content Policy](https://bloodontheclocktower.com/pages/community-created-content-policy) says you may not put characters, rules or images into *publicly available* digital versions without their approval. Private and test use with friends is fine. Don't publish it (Workshop, public server browser, GitHub release) without asking them first.

## 1. Why a mission, not a mod

| | Mission | Mod |
|---|---|---|
| Distribution | one PBO in `mpmissions` | addon, every player loads it |
| New assets needed for PoC | none (vanilla objects, markers, UI built with `ctrlCreate`) | same |
| Iteration speed | edit, reload, test | pack, restart |
| Reuse across maps | copy the `modules/botc` folder (as with grad-loadout) | automatic |
| When it becomes worth it | custom clock-tower model, bell sounds, retextured "ghost" uniforms, Workshop release | |

Decision: mission for the PoC. If it works, the `modules/botc` folder can be lifted into an addon later.

## 2. What the game needs, and how Arma covers it

| BotC needs | Arma mechanism | Risk |
|---|---|---|
| Hidden roles per player | Server-only `HashMap` state. Role cards go to one client through `remoteExecCall` with that client's owner ID, and show up as a diary record. **Never `publicVariable` role data.** | low |
| Storyteller grimoire | Dialog for the ST slot, built at runtime with `createDisplay` + `ctrlCreate`. No `description.ext` dialog classes. | medium (UI is fiddly, not hard) |
| Private day conversations | **ACRE2** proximity voice. Walk up to someone and talk. ACRE has selectable speaking volumes (whisper / normal / yell, via its voice-curve API), which suits both private talks and town-square announcements. Disable Arma's own channels so nothing bypasses ACRE. | low |
| Nobody talks at night | Each client drops its own incoming ACRE volume to 0 for the night (`acre_api_fnc_setGlobalVolume`, local effect). Everyone is asleep, so everyone muting themselves is enough. | **verify** function names and behaviour against the ACRE2 docs |
| ST hears everything / speaks to the town | Put the ST slot in ACRE spectator mode (`acre_api_fnc_setSpectator`), which hears all players. Ghosts must *not* be spectators, because dead players still talk in BotC. Whether a spectator can also be heard by the town needs testing. | **verify** |
| Private ST-to-player voice at night | Optional: an ACRE radio on a shared channel for the ST and the waking player. | optional |
| ST-to-player "whisper" at night | Text goes through the info UI. Optionally, `radioChannelCreate` gives a private voice channel holding only the ST and the currently waking player. | optional |
| Seating order (Empath neighbours, clockwise voting) | N seat markers or logics on a circle around the square. Seat index is the seating order. | low |
| Day/night | Phase state machine on the server. At night, black screen plus the player teleported to their seat or "house". The day has a timer the ST can extend. | low |
| Nominations and votes | Hold-action at the gallows or a dialog. Server polls each living player in seat order (with a 10 s timer) and broadcasts the tally. | medium |
| Dead players still talk and get one ghost vote | Keep the unit alive with `allowDamage false` and flag it `dead` in server state. Show a skull via Draw3D name tags. Remove the ability from the state, not the body. | low |
| Identify players | Name tags drawn with `drawIcon3D` (difficulty name tags are off). The tag shows a seat number, name and ghost state. | low |
| Solo testing | Bot mode: unit is not a player, so `ask` auto-answers randomly. | low, **do this early** |

## 3. Rules data needed

I'm only listing what the PoC depends on. Take the complete Trouble Brewing character text and night order from the official script sheet; I haven't reproduced them from memory.

**Setup distribution by player count** (Townsfolk / Outsiders / Minions / Demon):

| Players | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| T | 3 | 3 | 5 | 5 | 5 | 7 | 7 | 7 | 9 | 9 | 9 |
| O | 0 | 1 | 0 | 1 | 2 | 0 | 1 | 2 | 0 | 1 | 2 |
| M | 1 | 1 | 1 | 1 | 1 | 2 | 2 | 2 | 3 | 3 | 3 |
| D | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |

Baron modifies this: +2 Outsiders, −2 Townsfolk. The Drunk is an Outsider who is *told* they are a Townsfolk, so setup needs a "believes they are X" field.

**PoC cast** (chosen so each *mechanism type* is covered once):

| Role | Type | Mechanism it validates |
|---|---|---|
| Imp | Demon | night kill, death resolution, win check |
| Poisoner | Minion | status effect that makes other roles' info unreliable (ST "lie" path) |
| Monk | Townsfolk | night protection that cancels the Imp kill |
| Empath | Townsfolk | nightly passive info, seat-neighbour lookup, poison-affected |
| Fortune Teller | Townsfolk | nightly info with 2 player picks (plus a red herring) |
| Soldier | Townsfolk | passive immunity to the Imp |
| Slayer | Townsfolk | day ability, once per game |
| Virgin | Townsfolk | reaction on being nominated |
| Ravenkeeper | Townsfolk | reaction to dying at night (wakes on death) |

Night order only matters between dependent roles: Poisoner first, then Monk, then Imp, then the info roles (Ravenkeeper, Empath, Fortune Teller), so they see that night's deaths. For a full script, copy the order from the official night sheet into the role data.

## 4. Architecture

### 4.1 Layers

```
Storyteller client          Server (authority)               Player clients
  grimoire dialog   <-->   BOTC_state (HashMap)    <-->     role card (diary)
  "Next"/"Send info"       phase machine                    ask dialog (pick N players)
                           role registry + hooks            vote prompt
                           night queue                      Draw3D name tags
```

All game state lives **only on the server**. Clients get exactly what the rules let them know. The ST client gets the full grimoire. Because the server is a dedicated box, ST and players can't read each other's state.

### 4.2 State shape

```sqf
// BOTC_state (server only)
BOTC_state = createHashMapFromArray [
    ["phase", "lobby"],        // lobby | night | day | nomination | ended
    ["day", 0],
    ["seats", []],             // array of player records, index = seat order
    ["queue", []],             // night steps: [seatIdx, roleId]
    ["nominated", []],
    ["execution", [-1, 0]]     // [seatIdx, votes]
];

// one player record
createHashMapFromArray [
    ["unit", objNull],
    ["role", "empath"],        // what they really are
    ["believes", "empath"],    // what they were told (differs for Drunk)
    ["alive", true],
    ["ghostVote", true],       // unspent
    ["status", []],            // "poisoned", "protected", "drunk", ...
    ["tokens", createHashMap]  // role-private scratch (FT red herring, Slayer used, ...)
];
```

### 4.3 Role registry (data-driven)

Roles are config, so adding one is a config entry plus a few handler functions. No core changes:

```cpp
// modules/botc/cfgBotcRoles.hpp  (included from description.ext)
class CfgBotcRoles {
    class empath {
        name = "Empath";
        type = "townsfolk";
        alignment = "good";
        nightFirst = 1;  nightOther = 1;   // wakes on these nights
        onNight = "BOTC_role_fnc_empath_night";
        // optional hooks: onNominated, onDeath, onDayAbility, onSetup
    };
    class imp {
        name = "Imp";
        type = "demon";
        alignment = "evil";
        nightFirst = 0;  nightOther = 1;
        onNight = "BOTC_role_fnc_imp_night";
    };
};
```

A handler is *advisory*. It computes what the rules say should happen and hands the result to the ST to approve or edit:

```sqf
// fn_empath_night.sqf  (server)
params ["_seat"];   // player record
private _neighbours = [_seat] call BOTC_fnc_aliveNeighbours;          // [left, right]
private _evil = {[_x] call BOTC_fnc_registersAsEvil} count _neighbours; // Recluse/Spy can override
private _malfunction = "poisoned" in (_seat get "status") || "drunk" in (_seat get "status");

createHashMapFromArray [
    ["truth", _evil],
    ["malfunction", _malfunction],   // ST UI highlights this: "you may give any number"
    ["prompt", ""],                  // no player input needed
    ["info", format ["%1 of your living neighbours are evil.", _evil]]
]
```

The ST dialog shows the truthful value, a "poisoned/drunk, lie allowed" warning where relevant, and an editable field. "Send" delivers it. The ST always gets the last word.

### 4.4 Night loop

```
BOTC_fnc_beginNight:
    blackout all players, mute ACRE incoming volume, seat them
    queue = roles in play, filtered by first/other night, sorted by night order
    (skip dead roles, except those with "wakes on death")
for each step in queue:
    proposal = call role.onNight
    if proposal.prompt != "":  answer = BOTC_fnc_ask [player, prompt]   // client picks N seats
    show proposal (+ answer) to ST, wait for "Send"/"Skip"
    BOTC_fnc_tell [player, text]
    run role.onNightResolve(answer)                                     // apply poison, protection, kill
ST presses "Dawn": announce deaths, unmute, phase = day
```

`BOTC_fnc_ask` and `BOTC_fnc_tell` are the only two client-facing primitives. Everything else is server logic. If the target isn't a player, `ask` returns a random legal answer immediately. That is the bot mode for solo testing.

### 4.5 Day loop

- The ST rings the town (sound + hint), the day timer starts, and ACRE volume is restored.
- A nomination at the gallows calls `onNominated` hooks (Virgin), then runs a clockwise vote starting left of the nominee.
- When the ST closes nominations, execute the highest tally if it meets the threshold (≥ half of living players) and isn't tied.
- Then run `BOTC_fnc_checkWin` (Demon dead, ≤ 2 alive, Saint hooks later). The ST can overrule.

## 5. PoC milestones

| # | Goal | Done when |
|---|---|---|
| M0 | Skeleton | ST slot + 5 player slots. "Start" assigns roles from the distribution table. Each player sees their role card. ST grimoire lists everyone. |
| M1 | Phases and execution | Night ↔ day loop with blackout and mute. Nomination, vote and execution work. Win check works. **Playable with only Imp and plain Townsfolk.** |
| M2 | Night queue | Poisoner, Monk, Imp, Soldier. Kill, protect and poison all resolve through the queue. |
| M3 | Info roles | Empath, Fortune Teller, Ravenkeeper, Virgin, Slayer, with the ST editing/lying when malfunction is flagged. |
| M4 | Polish | Name tags, bell sound, bot mode on all prompts, log of everything (for after-game review). |

M0 and M1 are already a game. Stop there if it turns out the feel is wrong.

## 6. Proposed file layout

Follows the existing convention (German comments in `description.ext`, `modules/<name>/cfgFunctions.hpp`, one function per file).

```
coXX_BotC_v00.VR/                      // map: VR or Stratis for the PoC
  description.ext                      // includes modules\botc\cfgFunctions.hpp, cfgBotcRoles.hpp
  initServer.sqf                       // BOTC_fnc_init
  initPlayerLocal.sqf                  // BOTC_fnc_clientInit (tags, channels)
  mission.sqm                          // 1 ST slot, 15 player slots, N seat markers "botc_seat_0..14", "botc_gallows"
  modules/botc/
    cfgFunctions.hpp
    cfgBotcRoles.hpp
    functions/
      core/     fn_init, fn_setup, fn_assignRoles, fn_phase, fn_checkWin
      comms/    fn_tell, fn_ask, fn_answer, fn_askBotAnswer
      night/    fn_beginNight, fn_nextStep, fn_resolve, fn_dawn
      day/      fn_beginDay, fn_nominate, fn_vote, fn_execute
      ui/       fn_grimoire, fn_askDialog, fn_roleCard, fn_nameTags
      roles/    fn_imp_night.sqf, fn_empath_night.sqf, ...
```

For the map, use VR or Stratis for the PoC. The town is irrelevant until M3. The only hard requirements are a flat circle of seats and a central object. A real village with a church tower (Altis or Livonia) is a cosmetic upgrade, not a blocker.

## 7. Risks and open questions

1. **ACRE API details.** I'm naming these from memory: `acre_api_fnc_setGlobalVolume`, `acre_api_fnc_setSpectator` and the voice-curve functions. I haven't checked them against the ACRE2 docs, so confirm exact names, arguments and locality first. The spike below covers this. Because ACRE replaces Arma's own voice, the `enableChannel` approach I first proposed isn't needed.
2. **ACRE dependencies and range.** Every player needs ACRE2 (and so CBA) plus its TeamSpeak setup, and the server needs the ACRE plugin configured. Proximity range depends on ACRE's voice curve and the speaking mode, so the seat ring and square need to be large enough that two groups can whisper without overhearing each other. Tune this in a playtest.
3. **Zeus/admin can see state.** Fine between friends. A dedicated server with nobody in the ST slot cheating is the trust model.
4. **Vote UX.** BotC voting is visible hand-raising. A clockwise prompt with results shown publicly is the simple equivalent. The raised-hand animation is a polish item.
5. **ST load.** Night steps without automation are slow. The queue plus suggested answers is the mitigation. If it still drags, add an auto-ST mode (random legal choices) for bot seats only.
6. **Rules fidelity.** Edge cases (Spy/Recluse "registers as", Scarlet Woman takeover, Virgin nomination interactions) are where time goes. The design defers all of them to the ST: hooks propose, the ST disposes.
7. **Legal.** See TL;DR. Ask The Pandemonium Institute before any public release.

## 8. First spike (about half a day)

1. Copy `template/` to `coXX_BotC_v00.VR`, add 1 ST + 5 player slots.
2. `fn_tell` / `fn_ask` with a generic list dialog, plus the bot fallback.
3. ACRE night-mute test (incoming volume to 0 and back) plus ST spectator test, on a dedicated server with 2 clients.
4. `fn_assignRoles` from the distribution table, role card as a diary record.

If all four work, M0–M1 are just plumbing.
