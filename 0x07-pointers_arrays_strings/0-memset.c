#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: satarting address of memory to be fill
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n;  a++)
	{
		*(s + a) = b;
	}
	return (s);

}
