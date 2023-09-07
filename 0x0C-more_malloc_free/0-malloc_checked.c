#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: integer input
 *
 * Return: nothing
 *
 *
 *
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;
	unsigned int i;

	for (i = 0; i < b; i++)
		;

	ptr = (unsigned int *)malloc(sizeof(unsigned int) * i);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
