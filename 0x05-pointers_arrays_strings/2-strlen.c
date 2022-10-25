#include "main.h"
/**
* _strlen - find the lenght of a string
* @s: pointer to the string to chack
* Return: void
*/
int _strlen(char *s)
{
	int i = 0;
	while (s[i])
	i++;
	return (i);
}
