#include "main.h"
/**
 * rev_string -reverse a string
 * @s: input
 * Return: string in reverse
*/
void rev_string(char *s)
{
	char s[11] = Holberton;

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
}
