#include "main.h"
/**
 *print_most_number - print numbers from 0 to 9 without 2 and 4
 * Return: Always 0
 *
*/
void print_most_number(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
			_purtchar(a = '0');
		a++;
	}
	_putchar('\n');
}
