# Pokemon FireRed - Personal Quality of Life Edition

[![Build](https://github.com/chale1342/pokefirered/workflows/Build/badge.svg)](https://github.com/chale1342/pokefirered/actions)
[![Release](https://img.shields.io/github/v/release/chale1342/pokefirered)](https://github.com/chale1342/pokefirered/releases)

**A personal ROM hack with quality of life improvements I wanted for my own playthrough.**

This is my first attempt at ROM hacking, built primarily because I couldn't find existing hacks with the specific features I wanted. It adds various quality of life improvements to Pokemon FireRed while keeping the core game unchanged.


## Features

### Movement & Navigation
- **Autorun Toggle** - Toggle in Options Menu (Page 2) to run without holding B
- **Indoor Running** - Run inside buildings
- **Permanent Cut Trees** - Cut trees don't respawn

### Battle Improvements
- **Nature Stat Display** - See nature modifiers in Pokemon summary
- **Enhanced Exp. Share** - Full experience for both participants

### Interface & Convenience
- **Options Menu Pagination** - L/R to navigate between option pages
- **Party Pokemon Movement** - Select button to rearrange party
- **Better Shops** - Improved TM availability and interface

### Wild Pokemon Changes
- **Early Water Encounters** - Better options for Charmander players vs Brock
- **Improved Fishing** - Rebalanced encounters and lower levels (max 6)
- **LeafGreen Pokemon** - All version exclusives available
- **Location Additions** - Added Jynx to Seafoam Islands

### World Changes
- **Healing NPCs** - Added convenient healing locations
- **NPC Improvements** - Relocated some NPCs with better placement

### Key Controls
- **L/R in Options Menu** - Switch between option pages
- **Select in Party Menu** - Move Pokemon around
- **Options → Page 2 → Auto Run** - Toggle automatic running

## Building from Source

This project is based on the [pret/pokefirered](https://github.com/pret/pokefirered) decompilation.

```bash
git clone https://github.com/chale1342/pokefirered.git
cd pokefirered
make -j$(nproc)
```

See [INSTALL.md](INSTALL.md) for detailed setup instructions.

## Credits

This ROM hack is built on the [pret/pokefirered](https://github.com/pret/pokefirered) decompilation project.

- **Original Game**: Game Freak, Nintendo, The Pokemon Company
- **Decompilation**: [pret community](https://pret.github.io/)
- **ROM Hack**: My personal modifications for learning and convenience

## License

Same as the original pret/pokefirered project.
