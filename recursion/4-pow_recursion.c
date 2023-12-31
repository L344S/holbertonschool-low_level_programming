#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - entry point
 * @x: given number to convert
 * @y: given power number
 * Description: function that returns the value of x raised to the power of y
 * Return: 0 if success
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
