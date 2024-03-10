cmake_minimum_required(VERSION 3.5)
project(RectangleProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include header files
include_directories(include)

# Add source files
add_executable(rectangle src/rectangle.cpp)

# Link your executable with the shared library
target_link_libraries(rectangle /home/tejnxt/github/cmakerepo/external/lib/libAdditionLibrary.so)

