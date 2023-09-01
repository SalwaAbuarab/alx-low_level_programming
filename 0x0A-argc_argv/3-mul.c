#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: integer
 * @argv: list
 *
 * Return: 0 (success) otherwise  return 1
 *
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
		mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mult);
	return (0);
}
