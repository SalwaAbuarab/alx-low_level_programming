#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: string that be printed
 *
 * Return: nothing
*/
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
