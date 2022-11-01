#include "main.h"
#include <stddef.h>
/**
 * _strstr - find the first occurance of needle in haystack
 * @haystack: where we have look
 * @needle: what we are looking for
 * Return: pointer to begining of located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (point = 0; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (*(haystack + point) != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
