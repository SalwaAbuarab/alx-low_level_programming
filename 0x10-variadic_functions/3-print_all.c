#include "variadic_functions.h"

/**
 * check_char - prints the char characters
 *
 * @args: the type
 *
 * Return: nothing
 *
*/
void check_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * check_int - prints the int
 *
 * @args: the type
 *
 * Return: nothing
 *
*/
void check_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * check_float - prints the float
 *
 * @args: the type
 *
 * Return: nothing
 *
*/
void check_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * check_string - prints the strig
 *
 * @args: the type
 *
 * Return: nothing
 *
*/
void check_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 *
*/
void print_all(const char * const format, ...)
{
	token_t types[] = {
		{"c", check_char},
		{"i", check_int},
		{"f", check_float},
		{"s", check_string},
		{NULL, NULL}
	};

	int x = 0, y = 0;
	va_list args;
	char *sep = "";

	va_start(args, format);

	while (format && format[x])
	{
		while (types[y].check)
		{
			if (format[x] == *types[y].check)
			{ printf("%s", sep);
				types[y].f(args);
				sep = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}
	printf("\n");
	va_end(args);
}
