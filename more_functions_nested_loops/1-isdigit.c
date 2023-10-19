#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if c is digit
 *
 * @c: The ASCII value of the paramater to be checked.
 *
 * Description: check if it's a number or not
 * Return: 1 if it's a digit or 0 if not
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
