#include "main.h"
/**
 * Main - I sometimes suffer from Insomnia
 * and all I can do is just read 
 * 
 * Return: Always 0
 */
void print_alphabet(void)
{
	char atz= 'a';

		for (atz <= 'z')
		{
			_putchar(atz);
			atz++;
		}

	_putchar('\n');

	return (0);
}
