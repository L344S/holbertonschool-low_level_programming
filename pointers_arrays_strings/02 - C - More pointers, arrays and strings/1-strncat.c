#include "main.h"

/**
 * _strncat - entry point
 * @dest: pointer
 * @src: pointer
 * @n: var
 * Description: function that also concatenates two strings
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *tmp1 = dest;
char *tmp2 = src;

while (*dest != '\0')
{
dest++;
}
while (src < tmp2 + n && *src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest++ = '\0';
dest = tmp1;
return (dest);
}
