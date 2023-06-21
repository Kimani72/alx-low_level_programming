#include "main.h"

/**
 * print_alphabet - Entry point.
 *
 * description - Prints the alphabet in lower case.
 *
 * Return: void
 */

int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
