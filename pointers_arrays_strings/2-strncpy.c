#include "main.h"

/**
 * *_strncpy - entry point
 * @dest: pointer
 * @src: pointer
 * @n: var
 * Description: function that copies a string.
 * Return: string if success
 */
char *_strncpy(char *dest, char *src, int n)
{
char *tmp = src;

while (src < tmp + n && *src != '\0')
{
*dest = *src;
src++;
dest++;
}

*dest++ = '\0';
dest = tmp;

return (dest);
}
