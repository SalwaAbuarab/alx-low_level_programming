#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: alwayes 0 (success)
*/

void more_numbers(void)
{
	int n, j, count;

	for (n = 0; n < 10; n++)

	{
		for (count = 0; count <= 14; count++)
	{
		j = count;
		if (count > 9)
		{
			_putchar(1 + 48);
			j = count % 10;
		}
		_putchar(j + 48);
	}
	_putchar('\n');
	}
}
