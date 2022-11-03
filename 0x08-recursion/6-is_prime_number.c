#include "main.h"
/**
 * _isitprime - look for prime number
 * @n: input number
 * @i: input number two
 * Return: 1 if prime number 0 if not
*/
int _isitprime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
			return (0);
		else
			return (_isitprime(n, i - 1));
	}
}
/**
 * is_prime_number - look for prime number
 * @n: input number
 * Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (_isitprime(n, n / 2));
}
