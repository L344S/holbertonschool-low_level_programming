#include "main.h"
#include <stdio.h>
/**
 * _strstr - entry point
 * @haystack: the string we're going throught
 * @needle: the substring we looking for
 * Description: function that locates a substring.
 * Return: a pointer to the beginning of the located substring, or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (NULL);
}
/**
 *
 */
