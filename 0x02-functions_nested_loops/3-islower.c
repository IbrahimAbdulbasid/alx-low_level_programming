#include "main.h"

/**
 * _islower - checks if a chracter is lowercase
 * @c: the chracter
 * Return: 1 if chracter is lowercase, 0 if not
 *
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
