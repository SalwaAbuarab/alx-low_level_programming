#include "main.h"

/**
 * print_alphabet_x10 - function print alphabet x10 to prints 10 times
 *
*/

void print_alphabet_x10(void)
{
	int i, alphabet;

	for (i = 1; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
	}
}
