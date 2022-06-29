#ifndef DOG
#define DOG
#include <stdio.h>
/**
 * struct dog - Structure.
 * @name: name.
 * @age: age.
 * @owner: owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_T - Strcture.
 */
struct dog_t
{
	typedef dog;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
