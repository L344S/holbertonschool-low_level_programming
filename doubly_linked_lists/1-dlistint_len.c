#include "lists.h"
/**
* dlistint_len - Prints all the elements of a dlistint_t list.
* @h: Pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	/* Variable qui va compter le nombre de node */
	size_t current_node = 0;

    /* Si la liste est vide, retourne 0 */
	if (h == NULL)
		return (0);

	/* Boucle qui va parcourir la liste et afficher chaque node */
	while (h)
	{
	/* Passe à la node suivante */
		h = h->next;
	/* Incrémente le compteur de node */
		current_node++;
	}
	/* Retourne le nombre de node présent dans la liste */
	return (current_node);
}
