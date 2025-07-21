# Pokemon FireRed Enhancement Features

This enhanced Pokemon FireRed ROM includes several quality-of-life improvements and gameplay enhancements:

## 1. Enhanced Exp. Share
- **Full XP Distribution**: Both the battling Pokemon AND any Pokemon holding an Exp. Share now receive full experience points
- **No XP splitting**: Unlike the original game where experience was divided, both Pokemon get the complete amount
- **Files modified**: `src/battle_script_commands.c`, `include/global.h`

## 2. Battle Speed Enhancement
- **Fast Forward Option**: Significantly speeds up battle animations and text
- **Menu Integration**: New "Battle Speed" option in the Options menu
- **Three Settings**: Normal, Fast (2x speed), Ultra Fast (4x speed)
- **Affects**: Battle message delays, pause commands, and animation timing
- **Files modified**: `src/option_menu.c`, `src/battle_script_commands.c`, `src/strings.c`, `include/global.h`

## 3. Water Encounter Improvements
- **Early Water Access**: Improved fishing encounters for Charmander players facing Brock's gym
- **Optimized Slots**: Moved useful Water-type Pokemon to Old Rod slots (0-1) for early availability
- **Locations Enhanced**: Viridian City, Pallet Town fishing spots
- **Pokemon Available**: Tentacool, Magikarp, and other water types accessible before the first gym
- **Files modified**: `src/data/wild_encounters.h`

## 4. Indoor Running
- **Run Everywhere**: Allows running inside all buildings, houses, and indoor locations
- **ROM Hack Feature**: Popular enhancement from other Pokemon ROM hacks
- **No Restrictions**: Works in Pokemon Centers, Gyms, houses, and all indoor areas
- **Maps Updated**: 262 indoor maps modified to enable running
- **Files modified**: All `data/maps/*/map.json` files with MAP_TYPE_INDOOR

## Building
To build this enhanced ROM:
```bash
make clean
make -j4
```

The resulting `pokefirered.gba` file will contain all enhancements and is fully compatible with GBA emulators and flash carts.

## Compatibility
- Maintains save compatibility with original FireRed
- Works with all standard GBA emulators
- Battle speed setting is saved to the game file
- All original game mechanics preserved

## Technical Details
- Battle speed multipliers: 1x (Normal), 2x (Fast), 4x (Ultra Fast)
- Experience calculation maintains proper level scaling
- Indoor running enabled via map-level permissions
- Options menu window sizing automatically adjusted for new option
