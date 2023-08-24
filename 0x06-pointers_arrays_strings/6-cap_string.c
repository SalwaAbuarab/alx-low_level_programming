#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @str: a return string
 *
 * Return: str string
*/

char *cap_string(char *str)
{
	char str[] = {0};
	char delimiter[] = {" \t\n,.!?\"(){}"};
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}
		for (i = 0; i < 12; i++)
			if (str == delimiter[i])
				return (1);
		return (0);
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}
		else
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
	}
	return (str);
}
