#!/bin/bash

# Compilation of all .c files into dynamic library named liball.so
gcc -shared -fPIC -o liball.so *.c

# Show symbols in dynamic library
nm -D --defined-only liball.so
