#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new_node node at a given position.
* @h: Pointer to the head of the list.
* @idx: Index of the list where the new node should be added.
* @n: Integer to add to the list.
* Return: The address of the new_node node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    /* Déclaration d'un pointeur pour la nouvelle et l'actuel node */
	dlistint_t *new_node;
	dlistint_t *current_node = *h;
    /* Déclaration d'un compteur */
	unsigned int i = 0;

    /* Si l'index est égal à 0 */
    /* utilise la fonction add_dnodeint pour ajouter la node au début */
	if (idx == 0)
		return (add_dnodeint(h, n));

    /* Boucle qui parcours la liste et s'arrête à l'index - 1 */
	while (current_node)
	{
    /* Si l'index est égal au compteur */
		if (i == idx - 1)
		{
    /* Si la node actuelle est égale à l'index */
    /* utilise la fonction add_dnodeint_end pour ajouter la node à la fin */
			if (current_node->next == NULL)
				return (add_dnodeint_end(h, n));
    /* Allocation de mémoire pour new_node */
			new_node = malloc(sizeof(dlistint_t));
    /* Si l'allocation de mémoire échoue, retourne NULL */
			if (new_node == NULL)
				return (NULL);
			new_node->n = n; /* give valeur membre n */
			new_node->next = current_node->next; /* give valeur membre next */
			new_node->prev = current_node; /* give valeur membre prev */
			current_node->next->prev = new_node;
			current_node->next = new_node; /* give valeur membre next */
    /* Retourne la valeur de new_node */
			return (new_node);
		}
		i++; /* Incrémente le compteur */
    /* Passe à la node suivante */
		current_node = current_node->next;
	}
    /* Retourne NULL si l'index n'est pas trouvé */
	return (NULL);
}
