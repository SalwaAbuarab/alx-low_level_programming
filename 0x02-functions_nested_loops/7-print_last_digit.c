#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: takes in integer type input for function
 *
 * Return: (lastdigit)
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	putchar(lastdigit + '0');
	return (lastdigit);
}
