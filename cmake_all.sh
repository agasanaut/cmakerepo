#!/bin/bash



# Recursively run CMake in each subdirectory
for dir in $(find . -type d); do
    if [ -f "$dir/CMakeLists.txt" ]; then
        (cd "$dir" && cmake .)
    fi
done

# Recursively run make in each subdirectory
for dir in $(find . -type d); do
    if [ -f "$dir/Makefile" ]; then
        (cd "$dir" && make)
    fi
done
