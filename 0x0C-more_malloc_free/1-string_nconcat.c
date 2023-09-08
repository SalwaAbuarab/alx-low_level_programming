#include "main.h"

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
	unsigned int k = 0;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	str = malloc(len1 + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[k++] = s1[i];

	for (j = 0; j < len2; j++)
		str[k++] = s2[j];

	str[k] = '\0';
	return (str);
}
