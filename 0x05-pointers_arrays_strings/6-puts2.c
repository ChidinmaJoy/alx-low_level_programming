#include "main.h"
/**
 * puts2 - prints alternating chars of string
 * @str: string, is the character not printed
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
	if (i % 2 == 0)
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
