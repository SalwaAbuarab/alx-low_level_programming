#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: input as parameter
 *
 * Return: the lenght of the string
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
