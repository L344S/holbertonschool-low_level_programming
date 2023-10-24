#include "main.h"

/**
 * _strcat - entry point
 * @dest: pointer
 * @src: pointer
 * Description: function that concatenates two strings
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *tmp = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest++ = '\0';
dest = tmp;
return (dest);
}
