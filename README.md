# Daemon-os
its some fun os, i created in linux, only linux compadibilty supported // will be updated

# ps 
### make sure to chmod all excutable files
i also need to study, in 8th grade.

## update 1.0
finally in the beta phase, will revamp this OS, later 😄
adding new things like the better functionality, updated calculator, im never adding windows compadibility
cus i hate windows ☹️. plus its faster on linux. windows doesnot have any good terminal functionality. can make it on
mac i guess
# KAMAZON UPDATE 🥳💰
a mockup of amazon. will now be present in this OS making it shift to
version 1.1.0 // terminal will be improved, along with additional lua scripts
😃 hope you have a happy 14th june

# DaemonOS 1.1.0 Manual
**The KAMAZON Update** 🥳💰

## Table of Contents
1. [Introduction](#introduction)
2. [System Requirements](#system-requirements)
3. [Getting Started](#getting-started)
4. [Boot Process](#boot-process)
5. [System Commands](#system-commands)
6. [Applications](#applications)
7. [Games](#games)
8. [NEW: KAMAZON Shopping System](#new-kamazon-shopping-system)
9. [Development Tools](#development-tools)
10. [System Maintenance](#system-maintenance)
11. [File Structure](#file-structure)
12. [Troubleshooting](#troubleshooting)
13. [Version History](#version-history)

---

## Introduction

DaemonOS 1.1.0 is a custom lightweight operating system interface built in C++ that provides a retro-style command-line computing experience. This version introduces the exciting **KAMAZON** shopping system, making it a significant update from version 1.0.

### What's New in 1.1.0
- 🛒 **KAMAZON** - Mock Amazon shopping system
- 🧮 **Enhanced Calculator** - Now with Python integration for complex calculations
- 📝 **Improved Documentation** - Better user guides and system information
- 🔧 **Refined Terminal Experience** - Better functionality and user interface

### Key Features
- Custom bootloader and shell interface
- Built-in shopping simulation (KAMAZON)
- Integrated games and applications
- System monitoring tools
- Developer console
- Colorful ASCII art interface
- Comprehensive logging system
- Cross-platform Linux compatibility

---

## System Requirements

### Minimum Requirements
- **Operating System:** Linux Mint 64x-86x (Primary support)
- **Shell:** Bash (recommended) - **Note: zsh may cause issues**
- **Compiler:** G++ (GNU C++ Compiler)
- **Python:** Python 3.x
- **Memory:** 512MB RAM minimum
- **Storage:** 100MB free space

### Required Dependencies
```bash
# Core dependencies
sudo apt install g++ python3 telnet

# Optional but recommended for full experience
sudo apt install lolcat neofetch
```

### System Commands Needed
- `clear`, `ls`, `date`, `echo`
- `lscpu`, `free` (optional)
- `lolcat` (for colorized output)
- `neofetch` (for system information)

---

## Getting Started

### Installation
1. Clone or download DaemonOS 1.1.0 to your system
2. Navigate to the DaemonOS directory
3. Make scripts executable:
   ```bash
   chmod +x *.sh boot main cal mess
   ```
4. Install dependencies (see System Requirements)

### First Boot
1. Open terminal in DaemonOS directory
2. Run the bootloader: `./boot`
3. When prompted, select `main.cpp` to boot into the main system
4. The system will display the colorful logo and available applications
5. Type `ls` to see available commands

---

## Boot Process

### Bootloader (`./boot`)
The bootloader provides:
- System initialization and date logging
- File selection interface for booting
- Directory listing of available executables
- Boot event logging to `log.log`

**Usage:**
```bash
./boot
```

**Boot Options:**
- `main.cpp` - Boot into main DaemonOS interface (primary option)

### Boot Sequence
1. Clear screen
2. Log boot time to `log.log`
3. Display bootloader version info
4. Show available files with `ls -al`
5. Wait for user selection
6. Launch selected system component

---

## System Commands

### Core System Commands
| Command | Description | Example |
|---------|-------------|----------|
| `ls` | Enhanced directory listing | Shows all files with custom formatting |
| `clear` | Clear terminal screen | Instant screen clear |
| `exit` | Exit DaemonOS | Terminates system (abort) |
| `cpu` | Display CPU information | Shows detailed processor info |
| `minfetch` | System info + logo display | Colorful system overview |
| `update` | Rebuild all system components | Recompiles all C++ programs |

### Navigation & Information
- **`ls`** - Uses custom `get_all.sh` script for enhanced listing
- **`clear`** - Standard terminal clear
- **`cpu`** - Combines clear + lscpu for clean CPU display
- **`minfetch`** - Displays logo + neofetch system information

---

## Applications

### Calculator (Enhanced in 1.1.0)
**Command:** `calculator`

**Features:**
- Basic arithmetic operations (`+`, `-`, `*`, `/`)
- Square root functions (`a*` for n1, `b*` for n2)
- **NEW:** Complex calculations via Python integration (`complex`)
- Continuous calculation mode
- Exit with `exit` command

**Usage:**
1. Type `calculator`
2. Enter two numbers when prompted
3. Enter operator:
   - `+`, `-`, `*`, `/` for basic math
   - `a*`, `b*` for square roots
   - `complex` for Python calculator
   - `exit` to return to main system
4. View result and continue or exit

### Image Loader
**Command:** `image`
**Description:** Python-based image loading and display utility

### Developer Console
**Command:** `dev_cons`
**Description:** Access to developer tools and system functions

---

## Games

### Minesweeper
**Command:** `minesweeper`
**Description:** Classic minesweeper game implemented in Python
**File:** `minesweeper.py`

### Maze Game
**Command:** `maze`
**Description:** Interactive maze navigation adventure
**File:** `maze.py` (68KB game file)

### The Crusader's Quest 1.2
**Command:** `game1`
**Description:** Extensive text-based RPG adventure game
**File:** `thecrusadersquest1.2.py` (64KB story-rich game)

### ASCII World Map
**Command:** `map`
**Description:** Interactive world map via telnet connection
**Requirements:** Internet connection, telnet
**Connection:** `telnet mapscii.me`

---

## NEW: KAMAZON Shopping System

### Overview
KAMAZON is a mock Amazon shopping experience integrated into DaemonOS 1.1.0, providing a fun simulation of online shopping.

### Accessing KAMAZON
**Command:** `kamazon`

### Features
- Colorful KAMAZON ASCII logo display
- Product catalog browsing
- Cash-on-delivery simulation
- Delivery date calculation
- Return to main system option

### Available Products
1. **[1] Deluxe Bar Soap** - Premium hygiene product
2. **[2] War Military Ration 500 grams** - Survival food supplies
3. **[3] Deluxe Royalty Bed** - Luxury sleeping furniture
4. **[4] Airsoft Desert Eagle** - Fun kids toy pistol with 70 pellets

### How to Shop
1. Type `kamazon` in main DaemonOS interface
2. View the colorful KAMAZON logo
3. Browse available products (displayed automatically)
4. Enter product number (1-4)
5. System calculates delivery date (8 days from current date)
6. Enter `0` to return to main system

### Shopping Commands
- Numbers `1-4`: Select products
- `0`: Return to main DaemonOS system

---

## Development Tools

### Update System
**Command:** `update`
**Script:** `update.sh`

**Functions:**
- Logs update timestamp to `log.log`
- Recompiles all C++ source files
- Creates fresh executables

**Build Targets:**
```bash
g++ main.cpp -o main           # Main system interface
g++ bootloader.cpp -o boot     # System bootloader
g++ calculator.cpp -o cal      # Enhanced calculator
g++ message.cpp -o mess        # Message utility
```

### Development Files
- **`main_core_utils.h`** - Core utility definitions
- **`required_core.h`** - Required system headers and macros
- **`.git/`** - Git version control directory
- **`build/` & `dist/`** - Build artifacts and distribution files

---

## System Maintenance

### Logging System
All activities logged to `log.log`:
- Boot timestamps
- System component loads
- Update operations
- Application launches

### File Management Scripts
- **`get_all.sh`** - Enhanced directory listing with multiple formats
- **`update.sh`** - Automated build system for all components

### Configuration Files
- **`intro.txt`** - System introduction and command reference
- **`README.md`** - Project information and updates
- **`logo`** - Main DaemonOS ASCII art
- **`kamazon_logo`** - KAMAZON ASCII branding

---

## File Structure

```
Daemon-os 1.1.0/
├── Executables
│   ├── boot*                    # System bootloader
│   ├── main*                    # Main OS interface
│   ├── cal*                     # Enhanced calculator
│   └── mess*                    # Message utility
├── Source Code
│   ├── bootloader.cpp           # Bootloader source
│   ├── main.cpp                 # Main system source
│   ├── calculator.cpp           # Calculator with Python integration
│   ├── message.cpp              # Message utility source
│   ├── main_core_utils.h        # Core utilities header
│   └── required_core.h          # System requirements header
├── Python Applications
│   ├── kamazon.py              # NEW: Shopping system
│   ├── imageloader.py          # Image display utility
│   ├── minesweeper.py          # Minesweeper game
│   ├── maze.py                 # Maze adventure game (68KB)
│   ├── thecrusadersquest1.2.py # RPG adventure (64KB)
│   └── developer_console.py    # Developer tools
├── System Scripts
│   ├── get_all.sh*             # Directory listing script
│   └── update.sh*              # Build automation script
├── Assets & Data
│   ├── logo                    # Main ASCII art logo
│   ├── kamazon_logo           # KAMAZON branding
│   ├── intro.txt              # System introduction
│   ├── log.log                # System activity log
│   ├── inbox.mail             # Mail system file
│   └── astronomicalSMP        # Astronomical data
├── Documentation
│   ├── README.md              # Project information
│   ├── MANUAL.md              # This manual
│   └── thecrusadersquest1.2.spec # Game specifications
├── Directories
│   ├── assets/                # Additional assets
│   ├── build/                 # Build artifacts
│   ├── dist/                  # Distribution files
│   └── .git/                  # Version control
└── Object Files
    ├── main.o                 # Compiled main object
    └── calculator.o           # Compiled calculator object
```

---

## Troubleshooting

### Common Issues & Solutions

**1. Shell Compatibility Issues**
- **Problem:** System bugs out or commands don't work
- **Solution:** Use bash instead of zsh
- **Command:** `bash` (switch to bash shell)

**2. Compilation Errors**
- **Problem:** C++ files won't compile
- **Solutions:**
  ```bash
  ./update.sh                    # Rebuild all components
  sudo apt install g++           # Install compiler
  chmod +x update.sh             # Make script executable
  ```

**3. Missing Dependencies**
- **Problem:** Commands like `lolcat` or `neofetch` not found
- **Solutions:**
  ```bash
  sudo apt install lolcat neofetch  # Install display tools
  sudo apt install python3         # Install Python
  sudo apt install telnet          # For map feature
  ```

**4. Permission Errors**
- **Problem:** Scripts won't execute
- **Solutions:**
  ```bash
  chmod +x *.sh                  # Make scripts executable
  chmod +x boot main cal mess    # Make executables runnable
  ```

**5. Python Applications Not Working**
- **Problem:** Games or KAMAZON won't launch
- **Solutions:**
  ```bash
  sudo apt install python3       # Ensure Python 3 installed
  python3 --version              # Verify Python version
  ls -la *.py                    # Check Python file permissions
  ```

**6. KAMAZON Issues**
- **Problem:** Shopping system crashes or displays incorrectly
- **Solutions:**
  - Ensure `kamazon_logo` file exists
  - Check Python 3 installation
  - Verify `lolcat` is installed for logo display

**7. Network Features (Map)**
- **Problem:** ASCII map won't connect
- **Solutions:**
  ```bash
  ping mapscii.me               # Test connectivity
  sudo apt install telnet       # Install telnet client
  ```

### Error Codes
- **Exit 0:** Normal termination
- **Exit 130:** User interruption (Ctrl+C)
- **Compilation errors:** Check dependencies and source files
- **Python errors:** Verify Python 3 installation and file permissions

### Log Analysis
Check `log.log` for detailed information:
```bash
tail -f log.log                # Monitor real-time logs
cat log.log                    # View all log entries
```

Log entries include:
- Boot timestamps
- Component load confirmations
- Update operation records
- System activity tracking

---

## Version History

### Version 1.1.0 - "The KAMAZON Update" (Current)
**Release Date:** June 14th
**Major Features:**
- 🛒 **KAMAZON Shopping System** - Mock Amazon experience
- 🧮 **Enhanced Calculator** - Python integration for complex math
- 📚 **Improved Documentation** - Comprehensive manuals and guides
- 🎨 **Better Terminal Experience** - Refined interface and functionality
- 🔧 **System Improvements** - Better error handling and logging

**New Commands:**
- `kamazon` - Access shopping simulation
- `complex` - Advanced calculator mode (within calculator)

**File Additions:**
- `kamazon.py` - Shopping system implementation
- `kamazon_logo` - ASCII branding for shopping system
- `intro.txt` - System introduction and command reference
- Enhanced `calculator.cpp` with Python integration

### Version 1.0 - "Beta Phase"
**Initial Features:**
- Basic shell interface
- Core games (Minesweeper, Maze, Crusader's Quest)
- Simple calculator
- System utilities
- Logging system
- ASCII art interface

---

## Advanced Usage

### Customization
**Adding New Commands:**
1. Edit `main.cpp`
2. Add new `if(os_input == "command")` block
3. Implement functionality with `system()` call
4. Run `./update.sh` to rebuild
5. Update this manual

**Creating New Applications:**
1. Write Python script or C++ program
2. Add to main.cpp command loop
3. Test functionality
4. Document new features

### Integration Tips
- Use `system()` calls for external programs
- Log activities to `log.log` for debugging
- Follow existing naming conventions
- Test on bash shell before deployment

---

## Developer Notes

### Project Philosophy
- **Linux Focus:** Optimized for Linux systems, no Windows compatibility planned
- **Educational Purpose:** Created by an 8th grade student as a learning project
- **Open Source:** Available for community contribution and learning
- **Retro Computing:** Emphasizes command-line interface and ASCII art

### Contributing
- Follow existing code style
- Test on Linux Mint (primary platform)
- Use bash for shell scripting
- Document new features in manual
- Maintain compatibility with core dependencies

### Future Roadmap
- Enhanced KAMAZON features
- Additional games and applications
- Improved system utilities
- Better error handling
- Possible Lua script integration

---

## Support & Community

### Getting Help
1. **Check this manual** for common issues
2. **Review `log.log`** for error messages
3. **Verify dependencies** are installed
4. **Test on bash shell** if using different shell
5. **Check file permissions** for executables

### System Information
- **Primary Platform:** Linux Mint 64x-86x
- **Shell Requirement:** Bash (zsh causes issues)
- **Development Environment:** G++, Python 3
- **Community:** Educational project, learning-focused

---

## Conclusion

DaemonOS 1.1.0 represents a significant evolution from the original version, introducing the fun and interactive KAMAZON shopping system while maintaining the core retro computing experience. This educational project demonstrates the possibilities of custom operating system interfaces and provides an excellent platform for learning system development.

**Happy 14th June!** 🎉

Enjoy exploring DaemonOS 1.1.0 and the new KAMAZON shopping experience!

---

**DaemonOS 1.1.0 Manual - End of Document**

*This manual covers all features of DaemonOS 1.1.0 "The KAMAZON Update". Keep this documentation updated as the system continues to evolve.*

**Created for:** Linux enthusiasts, students, and retro computing fans  
**Compatibility:** Linux Mint, Ubuntu, Debian-based systems  
**License:** Educational/Open Source  
**Maintainer:** DaemonOS Development Team
