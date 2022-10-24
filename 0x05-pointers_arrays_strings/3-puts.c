#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string
 * Return: void
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
