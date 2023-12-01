#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: number to print
* Return: nothing (void)
*/
void print_binary(unsigned long int n)
{
	signed long int lenght;

	char character;

	int flag;

	lenght = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	flag = 0;

	while (lenght >= 0)
	{
		character = (n >> lenght) & 1;

		if (flag == 1)
			putchar(character + '0');
		else
		{
			if (character == 1)
			{
				putchar(character + '0');
				flag = 1;
			}
		}

		lenght -= 1;
	}
}


