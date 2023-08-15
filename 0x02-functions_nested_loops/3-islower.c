#include "main.h"

/**
 * _islower - function to check if charachter is lowercase
 *
 * @c: chech input of function
 *
 * Return: 1 if 'c' is lower case otherwise alwayeso 0 (success)
 *
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
