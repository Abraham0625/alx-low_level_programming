#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -fPIC *.c
gcc -shared - o liball.ao *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
