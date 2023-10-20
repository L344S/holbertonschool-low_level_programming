#include <stdio.h>

/**
 * main - entry point
 * Description: print all numbers between 1-100 but replace some multiples
 * Return:  0 if success
 */

int main(void)
{
int multiple;

for (multiple = 0; multiple <= 100; multiple++)
{
if ((multiple % 5) == 0 && (multiple % 3) == 0)
{
printf("FizeBuzz");
}
else if ((multiple % 3) == 0)
{
printf("Fize");
}
else if ((multiple % 5) == 0)
{
printf("Buzz");
}
else
{
printf("%d", multiple);
}
}
return (0);
}
