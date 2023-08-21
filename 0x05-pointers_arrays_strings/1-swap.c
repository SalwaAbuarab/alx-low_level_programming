#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: int parameter
 *
 * @b: int parameter
 *
 * Return: nothing
 *
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
