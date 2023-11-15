#include "dog.h"
#include <stdio.h>
/**
 * print_dog - main entry
 * Description: function that prints a struct dog
 * @d: pointer to the struct dog in the file dog.h
 * Dans notre fichier 2-main.c on va assigner des valeurs aux membres
 * de la structure dog, on veut print ces valeurs tout en s'assurant
 * que si un des membre est égale à NULL de print (nil) à sa place
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		else if (d->age == 0)
		{
			d->age = 0;
		}
		else if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
