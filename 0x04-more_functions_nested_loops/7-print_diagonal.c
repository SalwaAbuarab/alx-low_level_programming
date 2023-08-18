#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 *
 * @n: is the number of times the \ should be printed
*/

void print_diagonal(int n)
{
	int diag, space;

	if (diag < (n - 1))
		_putchar('\n');
	else
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
				_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
