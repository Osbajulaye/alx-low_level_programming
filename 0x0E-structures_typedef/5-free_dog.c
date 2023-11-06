#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees a dog
 * @d: a dog struct
 * Return: NULL void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
