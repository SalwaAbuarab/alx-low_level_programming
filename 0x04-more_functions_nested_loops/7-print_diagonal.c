#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 *
 * @n: is the number of times the \ should be printed
*/

void print_diagonal(int n)
{
	int diag;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diag = 1; diag > 0; diag++)
			_putchar(92);
		_putchar('\n');
	}
}
