#include "dog.h"
/**
 * free_dog - Function.
 * @d: Pointer element.
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
