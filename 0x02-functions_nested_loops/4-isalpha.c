#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: chech input of funtion
 *
 * return: return 1 if condtion is true otherwise return 0 alwayes (success)
*/

int _isalpha(int c)
{
	if (c >= 68 && c <= 122)
		return (1);
	return (0);
}
