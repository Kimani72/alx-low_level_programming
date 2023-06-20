#include <stdio.h>

/**
 * main - Prints the alphabet in lower case.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
