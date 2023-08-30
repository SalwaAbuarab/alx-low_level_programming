#include "main.h"
/**
 * primefinder - search for if the number is prime
 *
 * @a: number to check
 * @b: number w'll go through
 *
 * Return: Whether or not the number is a prime number
*/
int primefinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);

	else if (a == b)
		return (1);

	else if (a > b)
		primefinder(a, b + 1);

	return (1);
}
/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *
 * @n: the number to check
 *
 * Return: returns 1 if the input integer is a prime number
 * otherwise return 0
 *
*/

int is_prime_number(int n)
{
	return (primefinder(n, 2));
}
