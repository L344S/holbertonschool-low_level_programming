#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list_t list.
* @h: pointer to the list_t list.
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
    /* On déclare une variable qui va compter le nombre de nodes*/
	size_t nb_nodesList = 0;

    /* On parcourt la linked list*/
    /* On veut afficher le contenu de chaque node*/
	while (h != NULL)
	{
		if (h->str == NULL)
    /* Si le contenu est NULL, on affiche (nil)*/
			printf("[0] (nil)\n");
		else
    /* Sinon on affiche le contenu*/
			printf("[%u] %s\n", h->len, h->str);
    /* On passe à la node suivante*/
		h = h->next;
    /* On incrémente le compteur de nodes*/
		nb_nodesList++;
	}
    /* Une fois arrivé à la fin de la linked list*/
    /* On retourne le nombre de nodes qu'elle contient*/
	return (nb_nodesList);
}
