#include "main.h"
/**
 * _memcpy -  function that copies memory area.
 *
 * @n: number of bytes to be copied
 * @dest: where to copy the memory to
 * @src: the memory area to copy from
 *
 *  Return: pointer dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
