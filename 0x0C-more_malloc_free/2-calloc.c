#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: the number of elements
 * @size: the size of elemnets tybe
 *
 * Return: a pointer to the allocated memory, other wise return NULL.
 *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;
	return (ptr);
}
