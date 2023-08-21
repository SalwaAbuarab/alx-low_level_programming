#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: string prameter to print
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s - 9);
		s--;
	}
	_putchar('\n');
}
