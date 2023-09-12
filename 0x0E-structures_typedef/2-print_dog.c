#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: a pointer to the struct dog
 *
 * Return: nothing
 *
*/

void print_dog(struct dog *d)
{

	if (d)
	{
		if (d->name == NULL || d->owner == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Owner: %s\n", d->owner);
		}
		printf("Age: %f\n", d->age);
	}
	else
		return;
}
