#include "main.h"

/**
 * _strcpy - entry point
 * @dest: pointer
 * @src: pointer
 * Description: function that copies the string pointed to by src
 * Return: to pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *copy = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return copy;
}

