#include "main.h"

/**
 * print_rev - This function prints string in reverse order
 *
 * @str: string to be printed in reverse order
 *
 * Return: nothing
 */
void print_rev(char *str)
{
	int j, len = strlen(str);

	for (j = len - 1; j >= 0; j--)
	_putchar(str[j]);

	_putchar('\n');
}
