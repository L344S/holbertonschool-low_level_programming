#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - Frees a dlistint_t list.
* @head: Pointer to the head of the list.
* Return: Nothing (void).
*/
void free_dlistint(dlistint_t *head)
{
    /* variable qui est initialisé à la node head */
	dlistint_t *current_node = head;
    /* variable qui stock temporairement la node suivante */
	dlistint_t *next_node;

    /* Boucle qui va parcourir la liste et libérer chaque node */
	while (current_node != NULL)
	{
    /* Stock la node suivante dans la variable next_node */
		next_node = current_node->next;
    /* Libère la node courante */
		free(current_node);
    /* Passe à la node suivante */
		current_node = next_node;
	}
}

