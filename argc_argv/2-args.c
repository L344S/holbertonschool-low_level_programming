#include <stdio.h>
/**
 * main - entry point
 * @argc: array who tell me how much arguments
 * @argv: arguments
 * Description: prints its own late
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
