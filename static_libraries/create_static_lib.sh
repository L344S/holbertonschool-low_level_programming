#!/bin/bash
# Compilez les fichiers .c en fichiers objets .o
gcc -Wall -Werror -Wextra -pedantic -c *.c
# Créer la library statique liball.a
ar rc liball.a *.o
# Indexer la library 
ranlib liball.a
