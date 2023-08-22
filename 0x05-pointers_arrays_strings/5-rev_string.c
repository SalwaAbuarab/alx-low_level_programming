#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: a pointer to string to point
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int start;
	int end;
	char temp;

	for (start = 0; s[start] != '\0'; start++)
		;

	for (end = 0; end < start / 2; end++)
	{
		temp = s[start];
		s[start] = s[start - 1 - end];
		s[start - 1 - end] = temp;
	}
}
