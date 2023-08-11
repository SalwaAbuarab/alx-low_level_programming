#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar("%i", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
