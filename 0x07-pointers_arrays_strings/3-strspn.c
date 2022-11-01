#include "main.h"
/**
 * _strspn - entery level
 * @s: input
 * @accept: input
 * Return: always 0
*/
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	for (; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (s[a] != accept[b])
			break;
	}
	return (a);
}
