#include "main.h"
#include <stdlib.h>
/**
 * _strdup - malloc new str and copy *str
 * @str: string copied
 * Return: pointer to new string
*/
char *_strdup(char *str)
{
	unsigned int i;
	int count = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
	count++;
	}
	count += 1;
	dest = malloc(count * sizeof(char));
	if (dest == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	dest[i] = str[i];
	}
	dest[i] = str[i];
	return (dest);
}
