#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints number of arguments
 * @argc: variable one
 * @argv: variable two
 *
 * Description: prints number of arguments
 * Return: 0 
 */

int main(int argc, char **argv)
{
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
		*argv[sum] = *argv[sum];
	}
	printf("%d\n", (sum - 1));
	return (0);
}
