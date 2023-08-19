#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 *
 * @n: is the number of times the \ should be printed
*/

void print_diagonal(int n)
{
	int diag, space;

	if (n <= 0)
		_putchar('\n');
	else if
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (space = 1; space <= diag; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar(92);
	_putchar('\n');
}
