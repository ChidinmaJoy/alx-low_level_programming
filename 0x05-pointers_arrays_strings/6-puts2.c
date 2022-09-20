#include "main.h"
/**
 * puts2 - prints alternating chars of string
 * @str: string, is the character not printed
 * Return: nothing
 */
void puts2(char *str)
{
	int v;

	v = 0;
	whle(str[v] != '\0')
	{
	if (v % 2 == 0)
	_putchar(str[v]);
	v++;
	}
	_putchar('\n');
}
