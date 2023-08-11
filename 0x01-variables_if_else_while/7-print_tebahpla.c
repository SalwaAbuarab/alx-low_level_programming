#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch <= 'z')
	{
		putchar(ch);
		ch--;
	}
	putchar ('\n');

	return (0);
}
