#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - entry point
 * @size: is the the number of character @c in our array
 * @c: character that will fill our array
 * Description: function that creates an array of chars
 * Return: Null if size is 0, return pointer if success
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *tableau;

	if (size == 0)
		return (NULL);

	tableau = malloc(sizeof(char) * size);
	if (tableau == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		tableau[i] = c;

	/*tableau[i] = '\0';*/

	return (tableau);
}
/**
 * create_array - betty style architecture
 * i will help us count and tableau will contain our c chars
 * before we start, we check if array's size is zero if so no need to do it
 * with malloc we make some space for our array, return null if no space
 * we finally start filling our array with c until we've filled everyting
 * when we're done we return our new array with all he contains
 */
