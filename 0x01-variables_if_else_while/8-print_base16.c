#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
*/

int main(void)
{
        int digit = 48; /*48: decimel rep of 0*/

        while (digit <= 102) /*102: decimel of rep f*/
        {
                putchar(digit);

		/* after 9 we jump till 96; '*/
		if (digit == 57)
			digit +=39;
		digit++;
        }
        putchar('\n');

        return (0);
}
