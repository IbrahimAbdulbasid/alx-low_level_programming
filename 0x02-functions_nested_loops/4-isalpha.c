#include "main.h"
/**
 * _isalpha -chect s for alphabets
 * @c: chracter to be checked
 *
 * Return: 1 if chracter is a letter, 0 if not
 *
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
