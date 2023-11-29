#include "lists.h"
/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to pointer to head of list
  * @str: string to duplicate to new_node
  * Return: address of new element or NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
    /* variable qui pointe vers le nouveau node */
	list_t *new_node;
    /* variable qui sert a parcourir la liste */
	list_t *duplicate;
    /* longueur de la chaine de caractere */
	int lenght;
    /* check si head est NULL */
	if (head == NULL)
		return (NULL);
    /* allocation de memoire pour le nouveau node */
	new_node = malloc(sizeof(list_t));
    /* check si l'allocation a échoué */
	if (new_node == NULL)
		return (NULL);
		if (str) /* check si str est pas NULL */
		new_node->str = strdup(str); /* si str est NULL, new_node->str est NULL */
		else
		new_node->str = NULL; /* sinon, on duplique str dans new_node->str */
    /* on calcule la longueur de la chaine de caractere */
	for (lenght = 0; *(str + lenght);)
		lenght++;
    /* on assigne la longueur de la chaine de caractere a new_node->len */
	new_node->len = lenght;
    /* si head est NULL, on assigne new_node a head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	duplicate = *head; /* on assigne head a duplicate */
    /* on parcourt la liste jusqu'a la fin */
    /* on assigne le nouveau node a la fin de la liste */
	while (duplicate->next)
	{
		duplicate = duplicate->next;
	}
    /* on assigne le nouveau node a la fin de la liste */
	duplicate->next = new_node;
    /* on retourne le nouveau node */
	return (new_node);
}

