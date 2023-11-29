#include <stdio.h>
#include "lists.h"
/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: pointer to the list_t list.
* @n: integer to add to the list.
* Return: the address of the new element, or NULL if it failed.
*/
/* Fonction qui prend en param double pointeur vers struc + string */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    /* Déclaration d'un pointeur vers une structure */
	dlistint_t *new;

    /* Allocation de mémoire pour le pointeur vers la structure */
	new = malloc(sizeof(dlistint_t));
    /* Si l'allocation de mémoire échoue, retourne NULL */
	if (new == NULL)
		return (NULL);

    /* Affectation de la valeur du paramètre n au membre n de la structure */
	new->n = n;
    /* Affectation de la valeur de head au membre next de la structure */
	new->next = *head;
    /* Affectation de la valeur NULL au membre prev de la structure */
	new->prev = NULL;

    /* Si la valeur de head est différente de NULL */
	if (*head != NULL)
    /* Affectation de la valeur de new au membre prev de la structure */
		(*head)->prev = new;
    /* Affectation de la valeur de new au membre head de la structure */
	*head = new;

    /* Retourne la valeur de new */
	return (new);
}
