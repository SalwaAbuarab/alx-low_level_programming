#include "main.h"

/**
 * main - Entry point
 *
 * Description: that prints _putchar using command putchar
 *
 * Return: 0 (success)
*/

int main(void)

{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
