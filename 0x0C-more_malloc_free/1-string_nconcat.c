#include "main.h"
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: seconed string
 * @n: the byts of the s2
 * Return: pointer shall point to a newly allocated space in memory,
 * and otherwise return NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned k = 0;
	unsigned int s1_length = strlen(s1);
	unsigned int s2_length = strlen(s2);
	unsigned int size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < s2_length)
		s2_length = n;

	size = s1_length + s2_length + 1;

	str = (char *)malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		str[k++] = s1[i];

	for (j = 0; j <= n; j++)
		str[k++] = s2[j];

	str[k] = '\0';
	return (str);
}
