#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: o (success)
*/

int main(void)
{
	char ch = 'a';
	char ch1 = 'A';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	putchar ('\n');

	while (ch1 <= 'Z')
	{
		putchar (ch1);
		ch1++;
	}
	putchar ('\n');

	return (0);
}
