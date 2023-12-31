#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src,
 *         includin the terminating null byte (\0),
 *          to the buffer pointed to by dest
 *
 * @dest: char type of string
 *
 * @src: char type of string
 *
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
