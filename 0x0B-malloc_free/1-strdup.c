#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter
 *
 * @str: array of character
 *
 * Return: a pointer to anewly allocated,
 * or NULL if insufficient memory was available
 *
 *
*/

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
			ptr[j] = str[j];
	}
	}
	return (ptr);
}
