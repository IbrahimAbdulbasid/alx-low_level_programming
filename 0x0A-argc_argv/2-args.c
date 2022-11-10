#include "main.h"
/**
 * main - print name of program
 * @argc: count argument
 * @argv: arguments
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
		printf("%s\n", argv[count]);
		}
		return (0);
	}
}
