#!/bin/bash
gcc -fPIC *.c
gcc -shared - o liball.ao *.o
