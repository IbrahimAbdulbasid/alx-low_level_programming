#include <unsite.h>
/**
 * _putchar - writes chracter c to stdout
 * @c: char to b printed
 * Return: 1 0n success
 *
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
