#include <stdio.h>
#include "lists.h"
/**
* list_len - counts the number of nodes in a linked list.
* @h: pointer to the list_t list.
* Return: the number of nodes.
*/
size_t list_len(const list_t *h)
{
	/* On déclare une variable qui va compter le nombre de nodes*/
	size_t nb_nodesList = 0;

	/* On parcourt la linked list*/
	while (h != NULL)
	{
		if (h->str == NULL)
		return (0);
    /* On passe à la node suivante*/
		h = h->next;
    /* On incrémente le compteur de nodes*/
		nb_nodesList++;
	}
	/* Une fois arrivé à la fin de la linked list*/
	/* On retourne le nombre de nodes qu'elle contient*/
	return (nb_nodesList);
}

