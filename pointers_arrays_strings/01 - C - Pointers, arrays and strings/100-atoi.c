#include "main.h"

/**
 * _atoi - entry point
 * @s: pointer string
 * Return: int if success
 */
int _atoi(char *s)
{
int signe = 1;
unsigned int resultat = 0;

do {
if (*s == '-')
signe = signe * -1;

else if (*s >= '0' && *s <= '9')
resultat = (resultat * 10) + (*s - '0');

else if (resultat > 0)
break;

} while (*s++);

return (resultat *signe);
}
