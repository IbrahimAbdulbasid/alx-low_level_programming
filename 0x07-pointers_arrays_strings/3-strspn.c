#include "main.h"
/**
 * _strspn - entery level
 * @s: input
 * @accept: input
 * Return: always 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;

	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				b++;
				break;
			}
			else if (accept[c + 1] == '\0')
				s++;
		}
	}
	_putchar('\n');
	return (n);
}
