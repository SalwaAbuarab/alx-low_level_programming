#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: a pointer to string to point
 *
 * Return: noting
 * i
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
}
