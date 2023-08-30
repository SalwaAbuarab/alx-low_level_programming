#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string that check the length of
 *
 * Return: an integer that displays the length of string
 *
 *
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
