#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array of integer
 *
 * @n: the number of elements of the array
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
