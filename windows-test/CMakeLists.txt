cmake_minimum_required(VERSION 3.16)
project(PlugTest VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Create executables
add_executable(plug-test main.cpp)
add_executable(console-test console_test.cpp)

# Link Qt6 libraries
target_link_libraries(plug-test PRIVATE Qt6::Widgets)
target_link_libraries(console-test PRIVATE Qt6::Core)

# Set up Qt6 automatic MOC/UIC/RCC
set_target_properties(plug-test PROPERTIES
    AUTOMOC ON
    AUTOUIC ON
    AUTORCC ON
)