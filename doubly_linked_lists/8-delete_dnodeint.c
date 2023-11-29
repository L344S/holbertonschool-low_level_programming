#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
* @head: pointer to the head of the list.
* @index: Index of the node that should be deleted. Index starts at 0.
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    /* déclare un poiteur vers node actuel, initailise à la tête de liste */
	dlistint_t *current_node = *head;
    /* déclare un compteur */
	unsigned int i = 0;

    /* check si la liste est vide */
	if (*head == NULL)
		return (-1);

    /* si l'index est égal à 0 */
	if (index == 0)
	{
    /* change la tête de liste pour la node suivante */
		*head = current_node->next;
    /* si la node suivante n'est pas NULL */
    /* change la valeur de prev pour NULL */
		if (current_node->next != NULL)
			current_node->next->prev = NULL;
    /* libère la mémoire de la node actuelle */
		free(current_node);
		return (1); /* SUCESS : return 1 si la node est supprimée */
	}

    /* boucle qui parcours la liste et s'arrête à l'index définit */
	while (current_node && i < index)
	{
		current_node = current_node->next;
		i++;
	}
    /* si le node actuel est NULL */
	if (current_node == NULL)
		return (-1); /* FAILURE : return -1 si l'index n'est pas trouvé */
    /* change la valeur de prev pour la node suivante */
    /* change la valeur de next pour la node précédente */
	current_node->prev->next = current_node->next;
	if (current_node->next) /* si la node suivante existe */
		current_node->next->prev = current_node->prev; /* mise à jour valeurs */
	free(current_node); /* libère la mémoire de la node actuelle */
	return (1); /* SUCESS : return 1 si la node est supprimée */
}


