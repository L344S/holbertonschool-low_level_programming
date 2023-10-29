#include "main.h"
#include <stdio.h>
/**
 * _strchr - entry point
 * @s: pointer of an string variable
 * @c: first occurence of an character in the string @s
 * Description:  function that locates a character @c  in a string @s
 * Return:  pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]); /*same as (s + i)*/
}
}
return (NULL);
}
/**
 * Looking to all the letter of the string @s one by ones
 * if one of them match @c then return the position of the char in @s
 * if none are matching then return NULL
 */
