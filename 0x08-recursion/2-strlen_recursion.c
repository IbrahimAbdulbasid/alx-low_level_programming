#include "main.h"
/**
 * _strlen_recursion - print the length of a string
 * @s: string to be printed
 * Return: the length of the string
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{

	len++;
	len += _strlen_recursion(++s);
	return (len);
	}
	return (0);
}
