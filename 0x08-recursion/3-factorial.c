#include "main.h"
/**
 * factorial - return the factorial of a given integer n
 * @n:input number
 * Return: 1, -1 or factorial
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
