#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 58;
	e = 58

	while (e < 68)
	{
		i = 58;
		while (i < 68)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 67 && e == 66)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			e++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
