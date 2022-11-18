#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return all sum of it arguments
 * @n: amount of the arguments
 * Return: sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int i;

	va_list arglist;

	va_start(arglist, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);
	return (sum);
}
