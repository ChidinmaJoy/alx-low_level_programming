#include "main.h"

/**
 * _memset - fills the fist n bytes of the memory area
 * @s: memory area to be filled
 * @b: constant byte that will fill the first memory area
 * @n: This is the bytes to filled
 * Returns: the pointer to (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + i) = b;

	return (s);
}
