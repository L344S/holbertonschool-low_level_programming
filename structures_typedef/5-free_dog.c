#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - main entry
 * Description: function that will free the space allocated by malloc
 * @d: pointer to the struct dog in the file dog.h
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
