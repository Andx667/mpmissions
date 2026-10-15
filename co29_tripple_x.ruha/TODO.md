# TODO

## Deep inspect the decon shower sound issue

The running shower (`modules/mb-deconshower`) has no audible sound. Particles and mist work.

### What is known

- `MB_fnc_deconShowerToggle` calls BI's `BIN_fnc_deconShowerAnim` (on) and `BIN_fnc_deconShowerAnimStop` (off).
- BI's function creates the sound with `"DeconShower_01_sound_F" createVehicleLocal [0,0,0]` and `setPosASL`s it to the shower. diwako_cbrn does exactly the same, so the code path is identical to both.
- `DeconShower_01_sound_F` exists in `props_f_enoch`. Sound classes in `sounds_f_enoch`: `Sound_DeconShower_01_loop`, `DeconShower_01_loop`, `Sfx_DeconShowerLarge`, `Sfx_DeconShowerSmall_Valves`, `DeconShower_Center_Loop_01`, `DeconShower_Nozzle_Loop_01..04`, `DeconShower_Spray_Loop_01`.
- An earlier attempt with a global `createSoundSource ["Sound_DeconShower_01_loop", getPosATL _shower, [], 0]` (created only where the shower is local) was also reported silent. It has since been removed.

### Things to check

- [ ] Is the shower in the Contact DLC sound addon actually loaded (`sounds_f_enoch`)? Does the shower play sound in a plain Eden mission with the vanilla `DeconShower_01_F` placed and turned on via its own action?
- [ ] After turning the shower on, run in the debug console:
  - `(shower getVariable ["bin_deconShower_objects", []])` and check the sound object exists and is not `objNull`.
  - `getPosASL` of that sound object vs. the shower (is it positioned correctly?).
  - `typeOf` / `simulation` of the sound object.
- [ ] Try `playSound3D` / `say3D` with `DeconShower_01_loop` and the `Sfx_*` sound sets to see which ones are audible at all.
- [ ] Does the sound object get deleted too early? `BIN_fnc_deconShowerAnimStop` and `BIN_fnc_deconShowerDelete` delete everything in `bin_deconShower_objects`. Check that nothing triggers the `MB_deconShower_turnOff` event right after turn-on (e.g. the water timer, `waitUntilAndExecute` timeout).
- [ ] Check the `.rpt` for sound or class errors when the shower starts.
- [ ] Check that the in-game effects/environment volume sliders are not at zero, and that nothing in the mission (e.g. ACE hearing, `fadeSound`, gas mask muffling in `mb-gasmaskfog`) is muting it.
- [ ] Is the sound only silent when standing right under the shower, or also from a distance? Possible occlusion by the attached containment area / tent.
- [ ] If nothing else works: add a looping `say3D` / `playSound3D` via a PFH as a fallback, stopped on turn-off.
