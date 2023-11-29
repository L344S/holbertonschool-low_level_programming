#include "lists.h"
/**
  * free_list - free the memory allocated for a list_t list
  * @head: pointer to head of list
  * Return: nothing (void)
  */
void free_list(list_t *head)
{
    /* check si head est NULL */
	if (head == NULL)
		return;

    /* on libere la memoire allouée pour chaque node */
	if (head->next)
		free_list(head->next);

    /* on libere la memoire allouée pour le string */
	free(head->str);
    /* on libere la memoire allouée pour head */
	free(head);
}
