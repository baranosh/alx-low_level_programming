#include "main.h"

/**
 * main - check code
 * This program checks for uppercase characters
 * Return: 0 or 1
 */

int _isupper(int c)
{
    char c;

    printf("\nEnter The Character : ");
    scanf("%c", &c);

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
