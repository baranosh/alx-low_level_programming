#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * This program checks for uppercase characters
 * Return: Always 0
 */
int _isupper(int c)
{
	char c;
	if (c >= 'A' && c <= 'Z')
		printf("Character is uppercase letters");
	else
		printf("Character is not uppercase letters");
	return (0);
}
