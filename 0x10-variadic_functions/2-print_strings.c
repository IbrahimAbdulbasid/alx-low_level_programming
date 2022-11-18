#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: string to be printed between strings
 * @n: number of strins
 * Return: don't return anything
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j;
	char *str;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
		{
		printf("(nil)");
		}
	else
	{
		printf("%s", str);
	}
	if (j < n - 1 && separator != NULL)
	{

		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(valist);
}
