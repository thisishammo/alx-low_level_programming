#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - prints the content of struct dog
 * @d: struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL && d->age >= 0 && d->age <= 29.5 && d->name != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
			printf("Age: %6f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			if (d->age < 0 && d->age > 29.5)
			{
				printf("Name: %s\n", d->name);
				printf("Age: (nil)");
				printf("Owner: %s\n", d->owner);
			}
			else
			{
				printf("Name: %s\n", d->name);
				printf("Age: %6f\n", d->age);
				printf("Owner: %s\n", d->owner);
			}
		}
	}
}
