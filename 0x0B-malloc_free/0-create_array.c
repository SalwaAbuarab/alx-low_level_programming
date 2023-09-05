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
	char *ptr;

	ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);

	if (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
