#include "hash_tables.h"
/**
* hash_table_print - Imprime une table de hachage
* @ht: La table de hachage
* Return: nothing (void)
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i; /* Déclare un index pour la table de hachage */

	hash_node_t *node; /* Déclare un pointeur de nœud de hachage */
	char *separator = ""; /* Initialise une chaîne de séparation vide */

	/* Si la table de hachage est NULL, ne fait rien et retourne */
	if (ht == NULL)
		return;

	printf("{"); /* Imprime le début de la table de hachage */

	/* Parcourt chaque index du tableau de la table de hachage */
	for (i = 0; i < ht->size; i++)
	{
		/* Récupère le premier nœud à cet index */
		node = ht->array[i];

		/* Parcourt la liste de nœuds à cet index */
		while (node != NULL)
		{
			/* Imprime la clé et la valeur du nœud actuel */
			printf("%s'%s': '%s'", separator, node->key, node->value);

			/* Met à jour la chaîne de séparation pour les prochains éléments */
			separator = ", ";

			/* Passe au nœud suivant */
			node = node->next;
		}
	}
	printf("}\n"); /* Imprime la fin de la table de hachage */
}
