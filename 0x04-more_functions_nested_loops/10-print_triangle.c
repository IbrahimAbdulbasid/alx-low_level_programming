#include "main.h"

/**
 *print_triangle - print a triagle
 * @n: size of the triangle
*/
void print_triangle(int n)
{
	int h, tri;

	if (h > 0)
	{
		for (h = 1; h <= n; n++)
		{
			for (tri = n - h; tri > 0; tri--)
				_putchar(' ');
			for (tri = 0; tri < h; tri++)
				_putchar('#');
			if (h == n)
				continue;
		_putchar('\n');
		}
	}
	_putchar('\n');
}
