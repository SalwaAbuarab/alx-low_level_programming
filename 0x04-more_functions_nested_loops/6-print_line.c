#include "main.h"

/**
 * print_line -  a function that draws a straight line in the termina
 *
 * @n: is a number of times that should tha _ be printed
*/

void print_line(int n)
{
	int lnch;

	if (n <= 0)

		_putchar('\n');
	else
	{
		for (lnch = 1; lnch <= n; lnch++)
			_putchar('_');
		_putchar('\n');
	}
}
