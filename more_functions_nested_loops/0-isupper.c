#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if c is uppercase
 *
 * @c: The ASCII value of the character to be checked.
 *
 * Description: check if c is uppercase
 * Return: 1 if uppercase or 0 if lowercase
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
