#include "main.h"

/**
 * Main - I sometimes suffer from Insomnia
 * and all I can do is just read 
 * 
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alp = 'a';

		while (alp <= 'z')
		{
			_putchar (alp);
			alp++;
		}

		_putchar('\n');
}
