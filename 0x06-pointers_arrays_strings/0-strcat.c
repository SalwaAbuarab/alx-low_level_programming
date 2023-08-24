#include "main.h"

/**
 * *_strcat -  function that concatenates two strings
 *
 * @dest: char array string type
 *
 * @src: char array string type
 *
 * Return: c
*/

char *_strcat(char *dest, char *src)
{
	int c, c1;

	for (c = 0; dest[c] != '\0'; c++)
		;
	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];

	return (dest);
}
