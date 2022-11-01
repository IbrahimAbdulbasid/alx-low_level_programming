#include "main.h"
/**
 * simple_print_buffer - print buffer
 * @buffer: the address of memory to be printed
 * @size: the size of the memory to be printed
 * Return: notthing
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int;

	a = 0;

	while (a < size)
	{
		if (a % 10)
		{
			_putchar(" ");
		}
		if (!(a % 10) && a)
		{
			_putchar("\n");
		}
		_putchar("0x%02x", buffer[a]);
		a++;
	}
	_putchar("\n");
}
