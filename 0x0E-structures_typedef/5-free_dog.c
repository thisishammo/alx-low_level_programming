#include "dog.h"
#include<stdlib.h>
#include<stddef.h>
/**
 * free_dog - frees dogs
 * @d: dog to be freed
 */
void free_dog(dog_t *d __attribute__((unused)))
{
	d = NULL;
}
