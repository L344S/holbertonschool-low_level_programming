#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - entry point
 * @s1: first string to concatenate to s2
 * @s2: second string to concatenate to s1
 * @n: number of letter of s2 we want to concatenate to s1
 * Description: function that concatenates two strings.
 * Return: Null if failure, return pointer if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2] && len2 < n)
		len2++;

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';
	return (concatenated);
}
