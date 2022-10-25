#include "main.h"
/**
 * _putchar - print a string
 * @str: strign to be printed
*/
void _putchar(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
