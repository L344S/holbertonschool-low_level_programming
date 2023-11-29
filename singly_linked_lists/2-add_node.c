#include <stdio.h>
#include "lists.h"
/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: pointer to the list_t list.
* @str: string to be added as the value of the new node.
* Return: the address of the new element, or NULL if it failed.
*/
/* Fonction qui prend en param double pointeur vers struc + string */
list_t *add_node(list_t **head, const char *str)
{
	/* Déclare un pointeur pour stocker une copie de la chaîne de caractères */
	char *duplicate;
    /* Déclare variable qui stockera la longueur de la string à copié */
	int lenght;
    /* Déclare un pointeur vers une nouvelle structure list_t */
	list_t *new;

	/* Alloue de la mémoire pour la nouvelle structure list_t */
	new = malloc(sizeof(list_t));
	if (new == NULL) /* Vérifie si l'allocation de mémoire a réussi */
		return (NULL); /* Si l'allocation a échoué, retourne NULL */

	/* Duplique la chaîne de caractères d'entrée */
	duplicate = strdup(str);
	if (duplicate == NULL) /* Vérifie si la duplication a réussi */
	{
		free(new); /* Libère la mémoire allouée*/
		return (NULL); /* Retourne NULL */
    }

	/* Calcule la longueur de la chaîne de caractères */
	for (lenght = 0; str[lenght];)
		lenght++;

	/* Assigner la chaîne dupliquée au membre str de la nouvelle structure */
	new->str = duplicate;
	/* Assigner la lenght au membre len de la nouvelle structure */
	new->len = lenght;
	/* Assigner le membre next pour pointer vers l'actuel 1er node*/
	new->next = *head;

	/* Mettre à jour le 1er node de la liste pour pointer vers la new struct*/
	*head = new;

	/* Retourne l'adresse de la nouvelle structure */
	return (new);
}

