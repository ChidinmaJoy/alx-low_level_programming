#include "main.h"

/**
 * _memset - function fills the fist n bytes of the memory area pointed to by s
 * with the constant byte b, fills a buffer with a
 * constant for a specified size
 * @s: memory area to be filled
 * @b: constant byte that will fill the first memory area
 * @n: This is the number of bytes that will fill the array s
 * Returns: a pointer to the memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;

	return (s);
}
