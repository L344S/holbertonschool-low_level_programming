#include "main.h"
/**
* _strlen - Calculates the length of a string
* @s: The string to calculate the length of
* Return: The length of the string
*/
size_t _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
