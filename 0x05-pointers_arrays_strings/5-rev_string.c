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
	int start = 0; 
	int end = 0;
	int temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
