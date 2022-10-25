#include "main.h"
/**
 * rev_string -reverse a string
 * @s: input
 * Return: string in reverse
*/
void rev_string(char *s)
{
	char s[11] = "Holberton!";

	_putchar("%s\n", s);
	rev_string(s);
	_putchar("%s\n", s);
}
