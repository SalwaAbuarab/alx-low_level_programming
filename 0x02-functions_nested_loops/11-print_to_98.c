#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: input
*/

void print_to_98(int n)
{
	int count;

	if (n < 98)
		for (count = n; count > 98; count--)
			-putchar(count);
	_putchar(',');
	_putchar(' ');

	else
		for (count = n; count < 98; count++)
			_putchar(count);
	_putchar(',');
	_putchar(' ');

	_putchar('\n');
}
