#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: The string to copy
 *
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 *
*/

char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
		return (NULL);
	while (str[j])
	{
		arr[j] = str[j];
		j++;
	}
	arr[j] = 0;
	return (arr);
}

/**
 * new_dog - function that creates a new dog
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the name of the new dog's owner
 *
 * Return: dog_t sturct
 *
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncpy;
	char *ocpy;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	ncpy = _strdup(name);
	if (!ncpy && name)
	{
		free(new);
		return (NULL);
	}
	ocpy = _strdup(owner);
	if (!ocpy && owner)
	{
		free(ncpy);
		free(new);
		return (NULL);
	}

	new->name = ncpy;
	new->age = age;
	new->owner = ocpy;

	return (new);

}
