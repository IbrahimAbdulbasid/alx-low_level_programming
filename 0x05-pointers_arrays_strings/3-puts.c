#include "main.h"
/**
 * _puts - print a string
 * @str: strign to be printed
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
