#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: C program using sizeof to size of the various types
 *
 * Return: always 0 (success)
*/

int main(void)
{
        char  ch;
	int num1;
        long int num2;
        long long int num3;
        float num4;
	
	printf("Size of a char: %c byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(num1));
	printf("Size of a long int: %ld byte(s)\n", sizeof(num2));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(num3));
	printf("Size of a float: %f byte(s)\n", sizeof(num4));
	return (0);
}       
