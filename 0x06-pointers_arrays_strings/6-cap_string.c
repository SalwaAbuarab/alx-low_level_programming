#include "main.h"
#include<stdio.h>

/**
 * islower - determines whether ascii is lowercase
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whther ascii is delimiter
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 *
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = {" \t\n,.!?\"(){}"};

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}


/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @s: a return string
 *
 * Return: s string
*/

char *cap_string(char *s)
{
	char *ptr  = s;
	char foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
