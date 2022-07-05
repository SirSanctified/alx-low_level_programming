#include "dog.h"
#include<stdlib.h>

/**
 * free_dog - free memory for struct dog
 * @d: pointer to dog structure
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
