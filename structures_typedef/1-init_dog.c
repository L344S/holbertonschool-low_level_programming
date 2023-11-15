#include "dog.h"
/**
 * init_dog - main entry
 * Description: initialize a variable of type struct dog
 * @d: pointer to the struct dog in the file dog.h
 * @name: pointer to an array of char that contains the name of the dog
 * @age: (float) age of the dog
 * @owner: pointer to an array of char that contains the name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*
	 * on assigne le paramêtre name initialiser dans 1-main.c
	 * au membre name de la struct dog ici représenter par le pointeur *d
	 */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
