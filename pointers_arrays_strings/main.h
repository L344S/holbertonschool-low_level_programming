#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/*_putchar.c*/
int _putchar(char c);

/*0-strcat.c*/
char *_strcat(char *dest, char *src);

/*1-strncat.c*/
char *_strncat(char *dest, char *src, int n);

/*2-strncpy.c*/
char *_strncpy(char *dest, char *src, int n);

/*3-strcmp.c*/
int _strcmp(char *s1, char *s2);

/*4-rev_array.c*/
void reverse_array(int *a, int n);

/*5-string_toupper.c*/
char *string_toupper(char *);

#endif
