#include "main.h"

/**
 * reverse_array - reverses array of int
 * @a: array
 * @n: no. of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
