#!/bin/bash

# Compile all .c files into .o object files
gcc -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up the generated object files
rm *.o

echo "Static library liball.a created successfully."
