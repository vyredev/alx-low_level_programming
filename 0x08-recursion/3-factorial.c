#include "main.h"

/**
 * factorial - returns factorial of a input number
 * @n: input
 * Return: none
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
