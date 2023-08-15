#include "main.h"

/**
  *_abs - function that computes the absolute value of an integer
  *
  *@n: takes in integer type input on function
  *
  *Return: 0 alwayes (success)
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		putchar(n);
	}
}
