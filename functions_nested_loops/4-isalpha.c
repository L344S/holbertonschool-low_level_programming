#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check if c is letter
 *
 * @c: The ASCII value of the character to be checked.
 *
 * Description: check if it's a alphabet character or not
 * Return: 1 if lowercase/uppercase or 0 if otherwise
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
