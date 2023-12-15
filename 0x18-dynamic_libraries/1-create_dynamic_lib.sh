#!/bin/bash

# Compile all .c files into a shared library

# Get the list of .c files in the current directory
C_FILES=$(ls *.c)

# Compile the files into a shared library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC -o liball.so $C_FILES

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so created successfully."
else
    echo "Compilation failed. Check for errors."
fi

