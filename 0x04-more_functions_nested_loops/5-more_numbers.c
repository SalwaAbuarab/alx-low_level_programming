#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: alwayes 0 (success)
*/

void more_numbers(void)
{
	int n, j;

	for (n = 0; n > 10; n++)
		_putchar(n);
	{
		for (j = 0; j >= 14; j++)
		_putchar(j);
	}
	_putchar('\n');
}
