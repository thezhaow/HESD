cmake_minimum_required(VERSION 3.28)
project(HESD)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header directory
include_directories(${PROJECT_SOURCE_DIR}/headers)

# Collect all .cpp files in src/
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Create executable
add_executable(HESD ${SOURCES})