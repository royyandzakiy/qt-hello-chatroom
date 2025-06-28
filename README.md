# Qt Simple Chatroom - README

A minimal Qt chatroom application that responds with "Hello [name]" when you send a message. Built with CMake, vcpkg, and designed for VSCode.

## Features

* Simple GUI with message display area
* Text input with send button
* Automatic "Hello [name]" response
* Cross-platform build system with CMake
* Dependency management with vcpkg

## Prerequisites

* Visual Studio Code
* CMake (v3.15+)
* Git
* vcpkg

## Setup Instructions

### 1. Install vcpkg (if not already installed)

```bash
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
./bootstrap-vcpkg.sh  # or bootstrap-vcpkg.bat on Windows
```

### 2. Install Qt dependencies

```bash
vcpkg install qt5-base qt5-tools
```

### 3. Clone and build the project

```bash
git clone https://github.com/your-repo/qt-chatroom.git
cd qt-chatroom
mkdir build
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=[path_to_vcpkg]/scripts/buildsystems/vcpkg.cmake
cmake --build .
```

### 4. Run the application

```bash
# On Windows
./Debug/QtChatroom.exe

# On Linux/macOS
./QtChatroom
```

## VSCode Setup

1. Install these extensions:
   * CMake Tools
   * C/C++

2. Set up your `settings.json`:

```json
{
    "cmake.configureSettings": {
        "CMAKE_TOOLCHAIN_FILE": "C:/vcpkg/scripts/buildsystems/vcpkg.cmake"
    }
}
```

## Future Enhancements

### Core Features
* Add real networking capability (TCP/UDP)
* Implement multiple client support
* Add message timestamps
* Support for multiple rooms/channels

### UI Improvements
* Add user list panel
* Implement message formatting (bold, colors)
* Add emoji support
* Dark/light theme toggle

### Technical Improvements
* Add unit tests with Qt Test
* Implement CI/CD pipeline
* Add logging system
* Support for multiple languages (i18n)

## Project Structure

```
qt-chatroom/
├── CMakeLists.txt        # Build configuration
├── vcpkg.json           # Dependency management
├── src/
│   ├── main.cpp         # Application entry point
│   ├── ChatWindow.h     # Main window class header
│   └── ChatWindow.cpp   # Main window implementation
└── README.md           # This file
```

## License

MIT License - Feel free to use and modify for your projects!

---

This README provides clear setup instructions while suggesting meaningful future improvements. The structure helps users quickly understand what the project does and how to extend it. You can customize the "Future Enhancements" section based on your specific roadmap.