#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: the character to initialize the array with
 *
 * Return: pointer to array, or NULL if it fails
 *
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
		return (NULL);

	if (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
