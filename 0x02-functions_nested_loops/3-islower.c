#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: chech input of function
 *
 * return: 1 if 'c' is lower case otherwise alwayeso 0 (success)
 *
*/

int _islower(int c)
{
	for (c >= 97 && c <= 122)
		return (1);
	return (0);
}
