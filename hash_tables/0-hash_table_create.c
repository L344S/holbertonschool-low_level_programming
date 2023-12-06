#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the hash table
* Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table; /* pointeur vers la nouvelle table */
	unsigned long int i; /* index pour notre boucle */

    /* on s'ssure que la taille est valide */
	if (size <= 0)
		return (NULL);

    /* on alloue la mémoire pour la table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL) /* si l'allocation échoue */
		return (NULL);

    /* on attribue des valeurs aux membres de la table */
	new_table->size = size;
    /* on alloue la mémoire pour le tableau de la nouvelle table */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL) /* si l'allocation échoue */
	{
		free(new_table); /* on libère la mémoire allouée pour la table */
		return (NULL);
	}

    /* on initialise les pointeurs du tableau à NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

    /* on retourne la nouvelle table */
	return (new_table);
}
