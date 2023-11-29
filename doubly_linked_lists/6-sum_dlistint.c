#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
* @head: Pointer to the head of the list.
* Return: sum of all the data (n) of a dlistint_t list.
*/
int sum_dlistint(dlistint_t *head)
{
	/* Variable qui va stocker la somme des valeurs des nodes */
	int sum = 0;

	/* Boucle qui va parcourir la liste dlistint_t de node*/
	while (head)
	{
	/* Ajoute la valeur de la node à la variable sum */
		sum = sum + head->n;
    /* Passe à la node suivante */
		head = head->next;
	}
    /* Retourne la somme des valeurs des nodes */
	return (sum);
}
