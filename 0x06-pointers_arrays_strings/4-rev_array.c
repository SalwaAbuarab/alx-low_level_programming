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
	int i, j, t;

	for (i = 0; a[i] != '\0'; i++)
		;
	for (i = 0, j = (n - 1); i < j; j--) 
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
