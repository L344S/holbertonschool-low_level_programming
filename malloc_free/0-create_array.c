#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - entry point
 * @size: size of the array
 * @c: string var 
 * Description: function that creates an array of chars
 * Return: Null if size is 0
 */
char *create_array(unsigned int size, char c)
{

int i;
char *test; 

if (size == 0)
return (NULL);	

test = malloc(size * sizeof(char));
if (test == 0)
return (NULL);

for (i = 0; i != '\0'; i++)
test[i] = c;

return (test);
}
