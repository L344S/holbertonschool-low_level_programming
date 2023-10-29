#include "main.h"
#include <stdio.h>
/**
 * _memcpy - entry point
 * @src: original memory area
 * @dest: copy of the memory area scr
 * @n: number of bytes
 * Description: copies @n bytes from memory area @src to memory area @dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
/*variable temporaire dans laquelle on va stocker le contenu de @src*/
char tmp = src[i];
/*on assigne le contenue copié de @scr à @dest*/
dest[i] = tmp;
}

return (dest);
}
