#include "lists.h"
/**
* add_dnodeint_end - adds a new_node node at the end of a dlistint_t list.
* @head: Pointer to the list_t list.
* @n: Integer to add to the list.
* Return: The address of the new_node element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    /* Déclaration d'un pointeur vers une structure */
	dlistint_t *new_node;
    /* Déclaration d'un pointeur vers une structure */
	dlistint_t *last = *head;

    /* Allocation de mémoire pour le pointeur vers la structure */
	new_node = malloc(sizeof(dlistint_t));
    /* Si l'allocation de mémoire échoue, retourne NULL */
	if (new_node == NULL)
		return (NULL);

    /* Affectation de la valeur du paramètre n au membre n de la structure */
	new_node->n = n;
    /* Affectation de la valeur NULL au membre next de la structure */
	new_node->next = NULL;

    /* Si la valeur de head est NULL */
	if (*head == NULL)
	{
    /* Affectation de la valeur NULL au membre prev de la structure */
		new_node->prev = NULL;
    /* Affectation de la valeur de new_node au membre head de la structure */
		*head = new_node;
    /* Retourne la valeur de new_node */
		return (new_node);
	}

    /* Boucle qui va parcourir la liste et afficher chaque node */
	while (last->next)
		last = last->next;
    /* Affectation de la valeur de new_node au membre next de la structure */
	last->next = new_node;
    /* Affectation de la valeur de last au membre prev de la structure */
	new_node->prev = last;

    /* Retourne la valeur de new_node */
	return (new_node);
}
