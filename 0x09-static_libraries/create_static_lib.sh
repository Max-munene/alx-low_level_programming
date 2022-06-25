#!/bin/bash
gcc -wall -pendatic -Werror Wextra -std=gnu89 -c *.c
ar -rc liball.a *.0
ranlib liball.a
