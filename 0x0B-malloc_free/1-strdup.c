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

	while (!(ptr =  (char *)malloc(sizeof(char) * strlen(str) + 1)) || str == NULL)
		return (NULL);

	while (*str)
		ptr[i]++ = *str++;
	return (ptr);

}
