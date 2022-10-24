#include <stdio.h>
#include "main.h"

/**
* print_array - pint 'n' elements of an array of integers
* @a: int type array pointer
* @n: int type integer
* Description: Numbers must be seperated by comma and space.
* Numbers should be displayed in the same order they are stored in array.
* You can only use _putchar to print.
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
