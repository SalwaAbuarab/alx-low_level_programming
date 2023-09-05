#include "main.h"

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
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

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = (int **)malloc(sizeof(int *) * width);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * height);
		if (ar[i] == 0)
		{
			while (i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}
	for (j = 0; j < width; j++)
		ar[i][j] = 0;
	return (ar);
}
