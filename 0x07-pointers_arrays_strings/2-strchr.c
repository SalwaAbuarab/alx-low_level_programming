#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *
 * @s: a string to check
 * @c: the character we are lookng for
 *
 * Return: a pointer to the first occurrence of the character c in the
 * string s, or Return NULL if the character is not found
 *
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
