#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 *
 * @c: check input of function
 *
 * Return: 1 if true otherwis 0 alwayes (success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
