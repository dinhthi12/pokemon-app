# CMakeLists.txt

cmake_minimum_required(VERSION 3.22)
project(DSA)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Add executable
add_executable(my_project_executable src/main.cpp)
