#include "main.h"
/**
 * _strpbrk - entery level
 * @s: input
 * @accept: input
 * Return:Always 0
*/
char *_strpbrk(char *s, char *accept)
{
	char d, *e;

	for (d = *s; d != 0; s++, d = *s)
	{
		for (e = accept; *e != 0; e++)
		{
			if (d == *e)
			{
			return (s);
			}
		}
	}
	return (0);
}
