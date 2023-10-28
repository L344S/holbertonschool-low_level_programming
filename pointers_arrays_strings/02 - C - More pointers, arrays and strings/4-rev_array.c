#include "main.h"
#include <stdio.h>
/**
 * reverse_array - entry point
 * @a: an array of integers
 * @n:the number of elements to swap
 * Description: function that reverses the content of an array of integers.
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int tmp, i;
for (i = 0; i < n / 2; i++)
{
/*
 * stockage temporaire de notre array[i (i est la position dans le tableau)]
*/
tmp = a[i];
/*
 * On procède à l'échange : l'élément position i se voit assigné
 * la derniere position nombre d'élement dans le tableau (n) - 1
 * ex il y a 13 nombre dans le array, le '\0' compris on le met à
 * la 12ème place
 * i marque la position ou il doit etre placé
 */
a[i] = a[n - 1 - i];
/*
 * on ouvre le tirroir temporaire ou était stocker tout nos élements
 * on le place à la dernière place, ce qui va inversé le sens du tableau
 * les prèmiers vont être dernier et les derniers premiers
 */
a[n - 1 - i] = tmp;
}
}
