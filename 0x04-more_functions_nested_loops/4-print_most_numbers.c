#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 *
 * Return: alwayes o (sccess)
*/

void print_most_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9);
	_putchar('\n');
}
