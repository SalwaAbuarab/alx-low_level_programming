#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase by using _putchar function
 *
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
