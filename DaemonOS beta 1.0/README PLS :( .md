# DaemonOS Beta Manual
**Version 1.0 Beta - "The Original"**

## Table of Contents
1. [Introduction](#introduction)
2. [Beta Status Warning](#beta-status-warning)
3. [System Requirements](#system-requirements)
4. [Getting Started](#getting-started)
5. [Boot Process](#boot-process)
6. [System Commands](#system-commands)
7. [Applications](#applications)
8. [Games](#games)
9. [Image Gallery](#image-gallery)
10. [Development Tools](#development-tools)
11. [System Maintenance](#system-maintenance)
12. [File Structure](#file-structure)
13. [Known Issues & Limitations](#known-issues--limitations)
14. [Troubleshooting](#troubleshooting)

---

## Introduction

DaemonOS Beta (v1.0) is the original experimental version of a custom operating system interface built in C++. This is a **limited, somewhat rough** early implementation that provides a basic command-line computing experience with integrated applications and games.

### Key Features
- Basic bootloader and shell interface
- Simple calculator with basic operations
- Built-in games (Minesweeper, Maze, RPG)
- ASCII art image gallery with penguin collection
- System monitoring tools
- Colorful terminal interface using lolcat
- Basic logging system

### What This Beta Includes
- Core system functionality
- Basic application launcher
- Simple games and utilities
- ASCII art viewing system
- Fundamental development tools

---

## Beta Status Warning

⚠️ **THIS IS BETA SOFTWARE** ⚠️

**Known Limitations:**
- Limited functionality compared to later versions
- Basic error handling
- Minimal user interface polish
- Simple command structure
- No advanced features
- Rough around the edges

**Expect:**
- Basic functionality that works but isn't polished
- Simple interfaces without advanced features
- Limited customization options
- Occasional quirks and limitations

**This version is primarily for:**
- Learning about early OS development
- Understanding basic system concepts
- Experimentation and education
- Historical reference

---

## System Requirements

### Minimum Requirements
- **Operating System:** Linux (Ubuntu, Mint, Debian-based)
- **Shell:** Bash
- **Compiler:** G++ (GNU C++ Compiler)
- **Python:** Python 3.x
- **Memory:** 256MB RAM minimum
- **Storage:** 50MB free space

### Required Dependencies
```bash
# Essential dependencies
sudo apt install g++ python3

# Recommended for full experience
sudo apt install lolcat neofetch telnet
```

---

## Getting Started

### Installation
1. Ensure you have the DaemonOS1 directory
2. Navigate to the directory: `cd DaemonOS1`
3. Make executables runnable:
   ```bash
   chmod +x boot main cal update.sh get_all.sh
   ```
4. Install dependencies (see System Requirements)

### First Boot
1. Open terminal in DaemonOS1 directory
2. Run: `./boot`
3. When prompted, type: `main.cpp`
4. The system will display the logo and available applications
5. Type commands to interact with the system

---

## Boot Process

### Bootloader
The bootloader (`./boot`) provides:
- System initialization
- Date/time logging to log.log
- File selection interface
- Directory listing with `ls -al`
- Boot into main system

**Usage:**
```bash
./boot
```

**Boot Process:**
1. Clear screen
2. Log boot time and event
3. Display "DAEMON OS ----- bootloader - 1.0"
4. Show available files
5. Wait for user to type `main.cpp`
6. Launch main system interface

**Important:** You must type exactly `main.cpp` to boot successfully.

---

## System Commands

### Core Commands
| Command | Description | Functionality |
|---------|-------------|---------------|
| `ls` | Directory listing | Uses custom get_all.sh script |
| `clear` | Clear screen | Standard terminal clear |
| `exit` | Exit system | Terminates with abort() |
| `cpu` | CPU information | Shows lscpu output |
| `minfetch` | System info | Displays logo + neofetch |
| `update` | Rebuild system | Compiles all C++ components |

### Basic Navigation
- **`ls`** - Shows files in two formats (normal and detailed)
- **`clear`** - Clears terminal screen
- **`cpu`** - Displays CPU specifications
- **`minfetch`** - Shows system information with colorful logo

---

## Applications

### Calculator
**Command:** `calculator`

**Features:**
- Basic arithmetic: `+`, `-`, `*`, `/`
- Square root functions: `a*` (sqrt of first number), `b*` (sqrt of second number)
- Continuous calculation mode
- Type `exit` to return to main system

**Usage:**
1. Type `calculator`
2. Enter two numbers when prompted
3. Enter operator (+, -, *, /, a*, b*)
4. View result
5. Continue with new calculation or type `exit`

### Image Loader
**Command:** `image`

**Features:**
- View ASCII art files
- Automatic file listing
- Colorized display using lolcat
- Support for .txt image files

**Usage:**
1. Type `image`
2. System shows available files
3. Type filename (e.g., `penguin001.txt`)
4. View colorized ASCII art
5. Press Enter to continue, type `exit` to return

### Developer Console
**Command:** `dev_cons`

**Description:** Basic developer tools and console access

---

## Games

### Minesweeper
**Command:** `minesweeper`
**File:** `minesweeper.py`
**Description:** Classic minesweeper game in Python

### Maze Game
**Command:** `maze`
**File:** `maze.py` (68KB)
**Description:** Interactive maze navigation game

### The Crusader's Quest 1.2
**Command:** `game-1`
**File:** `thecrusadersquest1.2.py` (64KB)
**Description:** Text-based RPG adventure game
**Note:** Uses `python` (not `python3`) command

### ASCII World Map
**Command:** `map`
**Description:** Interactive world map via telnet
**Requirements:** Internet connection
**Connection:** `telnet mapscii.me`

---

## Image Gallery

The system includes a collection of ASCII art images, primarily penguin-themed:

### Available Images
- **`penguin001.txt`** - Classic penguin ASCII art
- **`penguin002.txt`** - Penguin family photo
- **`penguin003.txt`** - Additional penguin design
- **`penguin004.txt`** - Larger penguin artwork (2KB)
- **`penguin005.txt`** - Medium penguin design
- **`penguin006.txt`** - Penguin variant
- **`penguin007.txt`** - Detailed penguin art
- **`penguin008.txt`** - Small penguin design
- **`penguin009.txt`** - Final penguin in collection

### Viewing Images
1. Use `image` command to enter image loader
2. Type filename (e.g., `penguin001.txt`)
3. Enjoy colorized ASCII art display
4. Press `~` and Enter to continue

---

## Development Tools

### Update System
**Command:** `update`
**Script:** `update.sh`

**Functions:**
- Logs update timestamp
- Recompiles core C++ files

**Build Process:**
```bash
g++ main.cpp -o main           # Main system
g++ bootloader.cpp -o boot     # Bootloader
g++ calculator.cpp -o cal      # Calculator
```

**Note:** This beta version has limited build targets compared to later versions.

### Header Files
- **`main_core_utils.h`** - Core utility definitions (mostly empty in beta)
- **`required_core.h`** - Required system headers (basic in beta)

---

## System Maintenance

### Logging
System activities are logged to `log.log`:
- Boot timestamps
- Main system loads
- Update operations

### File Management
- **`get_all.sh`** - Directory listing script (shows normal and detailed views)
- **`update.sh`** - Build automation (basic version)

### Configuration
- **`logo`** - ASCII art logo file
- **`thecrusadersquest1.2.spec`** - Game specification file

---

## File Structure

```
DaemonOS1/
├── Executables
│   ├── boot*                    # Bootloader
│   ├── main*                    # Main system interface
│   └── cal*                     # Calculator
├── Source Code
│   ├── bootloader.cpp           # Bootloader source
│   ├── main.cpp                 # Main system source
│   ├── calculator.cpp           # Calculator source
│   ├── main_core_utils.h        # Utilities header (basic)
│   └── required_core.h          # Requirements header (basic)
├── Python Applications
│   ├── imageloader.py           # Image viewing system
│   ├── minesweeper.py          # Minesweeper game (12KB)
│   ├── maze.py                 # Maze game (68KB)
│   ├── thecrusadersquest1.2.py # RPG game (64KB)
│   └── developer_console.py    # Developer tools
├── Scripts
│   ├── get_all.sh*             # Directory listing
│   └── update.sh*              # Build script
├── ASCII Art Gallery
│   ├── penguin001.txt          # Penguin art #1
│   ├── penguin002.txt          # Penguin family photo
│   ├── penguin003.txt          # Penguin art #3
│   ├── penguin004.txt          # Large penguin (2KB)
│   ├── penguin005.txt          # Penguin art #5
│   ├── penguin006.txt          # Penguin art #6
│   ├── penguin007.txt          # Penguin art #7
│   ├── penguin008.txt          # Small penguin
│   └── penguin009.txt          # Penguin art #9
├── System Files
│   ├── logo                    # Main system logo
│   ├── log.log                 # System activity log
│   └── thecrusadersquest1.2.spec # Game specs
└── Directories
    ├── build/                  # Build artifacts
    └── dist/                   # Distribution files
```

---

## Known Issues & Limitations

### Beta Limitations
1. **Basic Interface** - Minimal user experience polish
2. **Limited Commands** - Fewer features than later versions
3. **Simple Error Handling** - Basic error management
4. **Command Differences** - Some commands differ from later versions:
   - `game-1` instead of `game1`
   - Limited calculator features
   - Basic image loader

### Specific Issues
1. **Bootloader Requirement** - Must type exactly `main.cpp` to boot
2. **Python Version** - RPG game uses `python` not `python3`
3. **Limited Build** - Update script only builds 3 components
4. **Basic Headers** - Core header files are mostly empty
5. **Simple Logging** - Minimal logging compared to later versions

### Missing Features (vs Later Versions)
- No KAMAZON shopping system
- No message utility compilation
- Limited calculator functionality
- Basic image loader interface
- Fewer system utilities

---

## Troubleshooting

### Common Issues

**1. Boot Problems**
- **Issue:** Can't boot into main system
- **Solution:** Type exactly `main.cpp` when prompted
- **Note:** Case sensitive, must be exact

**2. Compilation Errors**
- **Issue:** Programs won't compile
- **Solutions:**
  ```bash
  ./update.sh                    # Rebuild system
  sudo apt install g++           # Install compiler
  chmod +x update.sh             # Fix permissions
  ```

**3. Python Game Issues**
- **Issue:** Games won't run
- **Solutions:**
  ```bash
  sudo apt install python3       # Install Python 3
  python3 --version              # Check version
  ```
- **Special Note:** RPG game uses `python` command, may need Python 2.7

**4. Image Loader Problems**
- **Issue:** Images don't display correctly
- **Solutions:**
  ```bash
  sudo apt install lolcat        # Install colorizer
  ls -la penguin*.txt           # Check image files exist
  ```

**5. Permission Errors**
- **Issue:** Scripts won't execute
- **Solutions:**
  ```bash
  chmod +x *.sh boot main cal   # Fix permissions
  ls -la                        # Check permissions
  ```

**6. Network Features**
- **Issue:** Map command doesn't work
- **Solutions:**
  ```bash
  ping mapscii.me               # Test connection
  sudo apt install telnet       # Install telnet
  ```

### Beta-Specific Solutions
- Keep expectations modest - this is early software
- Some rough edges are expected
- Limited functionality is normal
- Focus on learning and experimentation

### Log Analysis
```bash
cat log.log                     # View system logs
tail log.log                    # View recent entries
```

---

## Version Information

### DaemonOS Beta v1.0
**Release:** April 12, 2024
**Status:** Beta/Experimental
**Purpose:** Learning and development platform

### What This Version Represents
- **First Implementation** - Original concept and basic functionality
- **Learning Platform** - Educational tool for OS concepts
- **Foundation** - Base for future development
- **Experimental** - Testing ground for ideas

### Differences from Later Versions
- Simpler command structure
- Basic feature set
- Limited error handling
- Fewer applications
- Basic user interface
- Minimal documentation

---

## Educational Value

### Learning Opportunities
1. **Basic OS Concepts** - Understanding bootloaders and system interfaces
2. **C++ Programming** - System-level programming examples
3. **Shell Scripting** - Basic bash script usage
4. **Python Integration** - Mixing compiled and interpreted languages
5. **System Architecture** - How components work together

### Study Areas
- Bootloader design and implementation
- Command-line interface development
- System logging and monitoring
- Application integration
- Cross-language programming

---

## Development Notes

### Design Philosophy
- **Simplicity First** - Keep basic functionality working
- **Learning Focus** - Educational over production use
- **Experimental** - Try new ideas and concepts
- **Incremental** - Build features step by step

### Code Characteristics
- Basic C++ with standard libraries
- Simple control structures
- Minimal error handling
- Straightforward logic flow
- Educational comments

---

## Future Development

This beta version serves as the foundation for:
- Enhanced user interfaces
- Additional applications
- Better error handling
- More sophisticated features
- Improved documentation
- Advanced system utilities

---

## Conclusion

DaemonOS Beta v1.0 represents the humble beginnings of a custom operating system interface. While it may be "limited" and "a bit bad" compared to later versions, it provides valuable insight into:

- Basic OS development concepts
- System programming fundamentals
- Command-line interface design
- Application integration techniques
- Educational software development

**Remember:** This is beta software designed for learning and experimentation. Enjoy exploring the basics of OS development while keeping expectations appropriate for an early, experimental system.

### Using This Manual
- Start with basic commands to get familiar
- Explore the ASCII art gallery for fun
- Try the simple games
- Use the calculator for basic math
- Experiment with the image loader
- Learn from the source code

**Happy exploring!** 🐧

---

**DaemonOS Beta Manual - End of Document**

*This manual covers the original beta version of DaemonOS. This software is provided for educational purposes and historical reference.*

**Created for:** Students, Linux enthusiasts, and anyone interested in basic OS development  
**Compatibility:** Linux systems with bash shell  
**Status:** Beta/Educational software  
**Maintainer:** DaemonOS Development Team
