#include <unsite.h>
/**
 * _putchar - writes character c to stdout
 * @c: chracter to be printed
 * Return: 1 on success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
