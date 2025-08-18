# MP Missions Repository Overview

This repository contains cooperative Arma 3 missions for multiplayer gameplay.

## Active Missions

### Small Team Operations (1-18 players)

- **co01_Loadout_Baugrube.VR** - 1 player loadout testing on Virtual Reality map
- **co08_OP-Lions-Den_v00.cup_chernarus_A3** - 8 players, Operation Lions Den on CUP Chernarus A3
- **co18_OP-Feuchte-Füße_v00.stubbhult** - 18 players, Operation Wet Feet on Stubbhult

### Medium Operations (34-40 players)

- **co34_Jungle-Dagger_v00.lingor3** - 34 players, Jungle Dagger operation on Lingor3
- **co34_OP-Dusty-Road_v01.kunduz_valley** - 34 players, Operation Dusty Road v01 on Kunduz Valley *(PBO file)*

### Large Operations (40+ players)

- **co40-NAME_v00** - 40 players, placeholder/template mission
- **co40_GM.Enoch** - 40 players, Global Mobilization mission on Enoch (Livonia)
- **co40_GM.VR** - 40 players, Global Mobilization mission on Virtual Reality map
- **co41_OP-Blood-and-Sand_v00.UMB_Colombia** - 41 players, Operation Blood and Sand v00 on UMB Colombia
- **co41_OP-Blood-and-Sand_v01.UMB_Colombia** - 41 players, Operation Blood and Sand v01 on UMB Colombia *(PBO file)*

## Mission Naming Convention

Mission folder names follow this structure:

- **co** = Cooperative mission type
- **##** = Maximum number of players
- **Mission-Name** = Descriptive mission name
- **v##** = Version number
- **map_name** = Terrain/map the mission is played on

## Repository Structure

- **archive/** - Contains older/retired mission versions
- **docs/** - Documentation files
- **loadouts/** - Shared loadout configurations
- **template/** - Mission template for creating new missions
- **LICENSE** - Repository license
- **mkdocs.yml** - Documentation configuration

## Development

Use the `template/` folder as a starting point for creating new missions. Loadout configurations are stored in the `loadouts/` folder for reuse across missions.
