#include "dog.h"
#include <string.h>
/**
 * _str - Function.
 * @str: Pointer element.
 * Return: dog.
 */
char *_str(char *str)
{
	unsigned int a, len;
	char *dog;

	if (!str)
	{
		return (NULL);
	}
	for (len = 0; str[len] != 0;)
		len++;
	dog = (char *)malloc(sizeof(char) * len + 1);
	if (!dog)
	{
		return (NULL);
	}
	for (a = 0; a <= len; len++)
	{
		dog[a] = str[a];
	}
	return (dog);
}
/**
 * new_dog - New structure.
 * @name: Pointer element.
 * @age: Element.
 * @owner: Pointer element.
 * Return: d.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		return (NULL);
	}
	d->name = _str(name);
	if (!d->name)
	{
	free(d);
	return (NULL);
	}
	d->owner = _str(owner);
	if (!d->owner)
	{
	free(d->name);
	free(d);
	return (NULL);
	}
	d->age = age;
	return (d);
}
