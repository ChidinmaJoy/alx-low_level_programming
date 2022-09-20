#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int ts;

	for (ts = 0; *(str + ts) != '\0'; ts++)
	_putchar(*(str + ts));
	_putchar('\n');
}
