#include "main.h"
/**
 * array_range - function that creates an array of integers
 *
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: the pointer to the newly created array
 * othewise If min > max, return NULL, If malloc fails, return NULL
 *
 *
*/

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
