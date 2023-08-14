#include "dog.h"
#include <stddef.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: dog_type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newdog;
	dog_t *d;

	d = &newdog;
	d->name = name;
	d->age = age;
	d->owner = owner;
	if (d->name == NULL || d->age < 0 || d->age > 29.5 || d->owner == NULL)
	{
		return (NULL);
	}
	return (d);
}
