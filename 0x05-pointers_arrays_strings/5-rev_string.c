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
	int i, l;
	int temp;

	for (l = 0; s[l] != '\0'; i++)
		;

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
