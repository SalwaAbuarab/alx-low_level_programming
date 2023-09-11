#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: pointer of the name of the dog
 * @age: the age of the dog
 * @owner: ponter of the name of the owner
 *
 * Return: nothig
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
