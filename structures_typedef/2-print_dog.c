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
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
