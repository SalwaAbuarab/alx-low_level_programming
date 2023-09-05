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
	unsigned int i;

	while (!(ptr = malloc(sizeof(char) * strlen(str) + 1)) || str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * strlen(str) + 1);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		str[i] = ptr[i];
	return (ptr);

}
