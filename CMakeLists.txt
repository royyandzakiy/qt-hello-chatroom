cmake_minimum_required(VERSION 3.15)

project(QtChatroom VERSION 0.1.0 LANGUAGES CXX)

# Find vcpkg toolchain file
# set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

# Find Qt packages
find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable automatic moc, uic, and rcc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

# Add executable
add_executable(QtChatroom
  src/main.cpp
  src/ChatWindow.h
  src/ChatWindow.cpp
)

# Link Qt libraries
target_link_libraries(QtChatroom PRIVATE Qt5::Widgets)

# Install target
install(TARGETS QtChatroom DESTINATION bin)