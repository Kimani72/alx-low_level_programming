#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: number of times
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
