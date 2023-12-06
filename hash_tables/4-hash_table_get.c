#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: la table de hachage à laquelle ajouter ou mettre à jour la clé/valeur
* @key: la clé de la table de hachage
* Return: value associated with the element, or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index; /* Déclare un index pour la table de hachage */

	hash_node_t *tmp; /* Déclare un pointeur de node de hachage*/

	if (ht == NULL || key == NULL) /* Si l'un est NULL */
		return (NULL);
	/* Calcule l'index de la clé dans la table de hachage */
	index = key_index((const unsigned char *)key, ht->size);
	/* Récupère le premier nœud à cet index */
	tmp = ht->array[index];
	while (tmp != NULL) /* Parcours les nœuds à cet index */
	{
		if (strcmp(tmp->key, key) == 0) /* si la clé existe déjà */
			return (tmp->value);
		tmp = tmp->next; /* Passe au nœud suivant */
	}
	return (NULL);
}
