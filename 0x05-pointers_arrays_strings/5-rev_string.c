#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @str: string to be reversed
 */
void rev_string(char *str)
{
	int i = strlen(str) - 1, k = 0;
	char tmp;

	while (i > k)
	{
	tmp = str[i];
	str[i] = str[k];
	str[k] = tmp;
	i--;
	k++;
	}
}
