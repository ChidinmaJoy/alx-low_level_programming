#include <stdio.h>

/**
 * main - Prints reserved alphabet.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
