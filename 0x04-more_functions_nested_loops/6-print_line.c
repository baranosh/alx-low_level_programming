#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of '_' to be printed
 */

void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}

	_putchar('\n');
}
