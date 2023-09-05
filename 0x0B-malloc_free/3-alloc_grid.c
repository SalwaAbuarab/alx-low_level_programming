#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 *
 * @width: integer input
 * @height: integer input
 *
 * Return: returns a pointer to a 2 dimensional array of integers
 * and return NULL on failure
 *
*/
int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)

}
