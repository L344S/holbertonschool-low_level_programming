#include "main.h"
#include <stdio.h>

/**
 * swap_int - entry point
 *
 * @a: int variable
 * @b: int variable
 * Description: swaps the values of two integers.
 * Return: 0 if success
*/

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
