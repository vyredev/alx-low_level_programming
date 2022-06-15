#include "main.h"

/**
 * swap_int - swaps the values of the two integers
 * @a: first integer
 * @b: seconf integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
