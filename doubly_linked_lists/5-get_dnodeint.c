#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node, starting from 0.
* Return: The nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    /* Variable qui va garder la track de la node actuelle */
	unsigned int nth_node = 0;

    /* Boucle qui va parcourir la liste et afficher chaque node */
	while (head)
	{
    /* Si la node actuelle est égale à l'index */
    /* Retourne la valeur de la node actuelle */
		if (nth_node == index)
			return (head);
    /* Sinon incrémente le compteur de node pour dire que != index */
		nth_node++;
    /* Passe à la node suivante */
		head = head->next;
	}
    /* Retourne NULL si l'index n'est pas trouvé */
	return (NULL);
}
