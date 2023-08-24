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
	int count, count1;

	for (count = 0; *(dest + count) != '\0'; count++)
		;
	for (count1 = 0; count1 >= 0; count++)
	{
		if (*(src + count1) != '\0')
			*(dest + count) = *(src + count1);
		else
			break;
	}
	return (dest);
}
