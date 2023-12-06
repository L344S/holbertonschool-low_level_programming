#include "hash_tables.h"

/**
* hash_table_delete - supprime une table de hachage
* @ht: la table de hachage à supprimer
* Return: nothing (void)
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i; /* Déclare un index */

	hash_node_t *node, *tmp; /* Déclare deux pointeurs de nœuds de hachage */

	/* Si la table de hachage est NULL, ne fait rien et retourne */
	if (ht == NULL)
		return;

	/* Parcourt chaque index du tableau de la table de hachage */
	for (i = 0; i < ht->size; i++)
	{
		/* Récupère le premier nœud à cet index */
		node = ht->array[i];

		/* Parcourt la liste de nœuds à cet index */
		while (node)
		{
			/* Stocke le nœud suivant dans tmp */
			tmp = node->next;

			/* Libère la clé du nœud actuel */
			free(node->key);

			/* Libère la valeur du nœud actuel */
			free(node->value);

			/* Libère le nœud actuel */
			free(node);

			/* Passe au nœud suivant */
			node = tmp;
		}
	}

	/* Libère le tableau de la table de hachage */
	free(ht->array);

	/* Libère la table de hachage */
	free(ht);
}
