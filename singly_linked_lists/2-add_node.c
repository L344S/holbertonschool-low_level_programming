#include <stdio.h>
#include "lists.h"
/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: pointer to the list_t list.
* @str: string to be added as the value of the new node.
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	/* Déclare un pointeur vers une structure list_t */
	list_t *new_node;

	/* Alloue de la mémoire pour le nouveau node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) /* Vérifie si l'allocation de mémoire a réussi */
		return (NULL); /* Si l'allocation a échoué, retourne NULL */

	/* Duplique la chaîne de caractères passée en paramètre */
	new_node->str = _strdup(str);
	/* Vérifie si la duplication de la chaîne a réussi */
	if (new_node->str == NULL)
	{
	/* Si la duplication a échoué, libère la mémoire allouée */
		free(new_node);
		return (NULL); /* et retourne NULL */
	}

	/* Assigner la longueur de la chaîne au membre len du nouveau node*/
	new_node->len = _strlen(new_node->str);

	/* Assigner au membre next de new_node pr qu'il pointe vers le 1er node*/
	new_node->next = *head;

	/* Mettre à jour le premier nœud de la liste pour pointer vers new_node*/
	*head = new_node;

	/* Retourne l'adresse du nouveau node */
	return (new_node);
}

/**
* _strlen - Retourne la longueur d'une chaîne de caractères.
* @s: Pointeur vers la chaîne de caractères.
*
* Return: La longueur de la chaîne de caractères.
*/
int _strlen(const char *s)
{
	/* Initialise un compteur pour la longueur de la chaîne */
	int length = 0;

	/* Parcourt la chaîne jusqu'à ce qu'il atteigne la fin de chaîne ('\0') */
	while (s[length] != '\0')
	{
		length++; /* Incrémente le compteur de longueur */
	}
    /* Retourne la longueur de la chaîne */
	return (length);
}
/**
* _strdup - Duplique une chaîne de caractères.
* @str: Pointeur vers la chaîne de caractères.
*
* Return: Pointeur vers la chaîne de caractères dupliquée.
*/
char *_strdup(const char *str)
{
    /* Déclare un pointeur vers la chaîne dupliquée */
	char *duplicate;

    /* Déclare une variable pour la longueur de la chaîne */
	int length = _strlen(str);
	int i;

	/* Alloue de la mémoire pour la chaîne dupliquée*/
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL) /* Vérifie si l'allocation de mémoire a réussi */
		return (NULL);     /* Si l'allocation a échoué, retourne NULL */

	/* Copie chaque caractère de la chaîne d'entrée dans duplicate */
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
    /* Retourne la chaîne dupliquée */
	return (duplicate);
}
