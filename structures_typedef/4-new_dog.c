#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - entry point
 * @str: pointer to the string we need to count
 * Description: calculate the length of a string
 * Return: unsigned int if sucess -> length of the string.
 */
unsigned int _strlen(const char *str)
{
	unsigned int longueur = 0;

	while (str[longueur] != '\0')
		longueur++;

	return (longueur);
}
/**
 * _strdup - entry point
 * @str: Pointer to the string we need to duplicate.
 * Description: function that going to duplicate a specific string
 * Return: Pointer to copy of the string if sucess
 */
char *_strdup(const char *str)
{
	unsigned int longueur, i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	longueur = _strlen(str);

	new_str = malloc(sizeof(char) * (longueur + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= longueur; i++)
		new_str[i] = str[i];

	return (new_str);
}
/**
 * new_dog - entry point
 * @name: pointer -> member name of the struct containing the name of the dog
 * @age: age of the dog
 * @owner: pointer -> member owner of the struct containing the owner's name
 * Description: function that creates a new dog.
 * Return: if success pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nouveau_chien;

	if (name == NULL || owner == NULL || age == 0)
		return (0);

	nouveau_chien = malloc(sizeof(dog_t));
	if (nouveau_chien == NULL)
		return (NULL);

	nouveau_chien->name = _strdup(name);
	nouveau_chien->owner = _strdup(owner);
	nouveau_chien->age = age;

	return (nouveau_chien);
}
