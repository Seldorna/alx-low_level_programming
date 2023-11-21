#!/bin/bash
# create object files from all the .c files
gcc -c *.c
# create the static library from all the object files
ar -rcs liball.a *.o

