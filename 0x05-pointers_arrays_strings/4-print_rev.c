#include <string.h>
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
	int i, len = strlen(str);

	for (i = len - 1; i >= 0; i--)
	_putchar(str[i]);

	_putchar('\n');
}
