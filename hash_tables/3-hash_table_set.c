#include "hash_tables.h"
/**
* hash_table_set - ajoute un élément à la table de hachage
* @ht: la table de hachage à laquelle ajouter ou mettre à jour la clé/valeur
* @key: la clé de la table de hachage
* @value: la valeur associée à la clé
* Return: 1 si réussi, 0 sinon
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* Déclare un index pour la table de hachage */
	hash_node_t *tmp, *new_node; /* Déclare deux pointeurs de node de hachage*/

	if (ht == NULL || key == NULL || value == NULL) /* Si l'un est NULL */
		return (0);
	/* Calcule l'index de la clé dans la table de hachage */
	index = key_index((const unsigned char *)key, ht->size);
	/* Récupère le premier nœud à cet index */
	tmp = ht->array[index];
	while (tmp != NULL) /* Parcours les nœuds à cet index */
	{
		if (strcmp(tmp->key, key) == 0) /* si la clé existe déjà */
		{
			free(tmp->value); /* Libère l'ancienne valeur */
			tmp->value = strdup(value); /* Duplique la nouvelle valeur */
			if (tmp->value == NULL) /* Si la duplication échoue */
				return (0);
			return (1);
		}
		tmp = tmp->next; /* Passe au nœud suivant */
	}
	new_node = malloc(sizeof(hash_node_t)); /* Alloue la mémoire */
	if (new_node == NULL) /* Si l'allocation échoue */
		return (0);
	new_node->key = strdup(key); /* Duplique la clé */
	if (new_node->key == NULL) /* Si la duplication échoue */
	{
		free(new_node); /* Libère le nouveau nœud */
		return (0);
	}
	new_node->value = strdup(value); /* Duplique la valeur */
	if (new_node->value == NULL) /* Si la duplication échoue */
	{
		free(new_node->key); /* Libère la clé */
		free(new_node); /* Libère le nouveau nœud */
		return (0);
	}
	new_node->next = ht->array[index]; /* pointe vers le 1er node à cet index */
	ht->array[index] = new_node; /* Le new_node devient le 1er node à cet index*/
	return (1);
}
