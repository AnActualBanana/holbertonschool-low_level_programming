#!/bin/bash
gcc -c *.c
ar -rcs liball.a *.c
ar -rcs liball.a *.o
