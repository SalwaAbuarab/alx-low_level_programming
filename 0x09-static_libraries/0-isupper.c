#include "main.h"

/**
 * _isupper - function to check if charachter is upper case
 *
 * @c: check input of function
 *
 * Return: 1 if c is uppercase otherwise alwayes 0 (success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
