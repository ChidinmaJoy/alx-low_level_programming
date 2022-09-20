#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @p: pointer to the fitst integer
 * @q: pointer to the second integer
 * Retun: nothing
 */
void swap_int(int *p, int *q)
{
	int var = *p;
	*p = *q;
	*q = var;
}
