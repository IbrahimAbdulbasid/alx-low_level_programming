#include "main.h"
/**
 * _strpbrk - entery level
 * @s: input
 * @accept: input
 * Return:Always 0
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (k = 0; accept[j]; j++)
		{
			if *(s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
