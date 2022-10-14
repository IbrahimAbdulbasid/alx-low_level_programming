#include <stdio.h>
/**
 * Main -entry
 * Return: Always 0
 */

int main(void)
{
	char e;
	int b;
	long int d;
	long long int f;
	float g;

	printf("Size of a char: %d byte(s)\n", sizeof(e));
	printf("size of a int: %d byte(s)\n", sizeof(b));
	prinf("Size of a long int: %d byte(s)\n", sizeof(d));
	printf("Size of long long int: %d byte(s)\n", sizeof(f));
	printf("Size of a float: %d byte(s)\n", sizeof(g));
	return (0);
}
