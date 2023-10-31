#include "main.h"
#include <stdio.h>
/**
 * factorial- entry point
 * @n: variable of the given number
 * Description: function that returns the factorial of a given number
 * Return: 0 if success, or -1 if not
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
