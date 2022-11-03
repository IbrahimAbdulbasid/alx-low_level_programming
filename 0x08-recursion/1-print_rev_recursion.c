#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse way
 * @s: strings to be printed in reverse
 * Return: Always 0
*/
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
