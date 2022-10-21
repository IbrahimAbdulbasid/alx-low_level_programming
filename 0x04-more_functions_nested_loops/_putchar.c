#include <unistd.h>
#include "main.h"

/**
 * _putchar write the chracter c to 
 * @c: the chracter to be printed
 * Return: Always 0
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
