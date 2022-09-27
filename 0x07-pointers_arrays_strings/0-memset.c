#include "main.h"

/**
 * _memset - fills the memory with a constant byte,
 * @s: memory area.
 * @b: constant byte that will fill the memory area.
 * @n: This is the bytes to be filled.
 * Returns: the pointer to the memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
