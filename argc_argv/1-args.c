#include <stdio.h>
/**
 * main - entry point
 * @argc: array who tell me how much arguments
 * @argv: arguments
 * Description: prints its own late
 * Return: 0 on success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
argc--;
printf("%d\n", argc);
return (0);
}
