#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: integer input
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-1);
	}
	else (l > 0)
	{
		_putchar(l + 48);
		return (l);
	}
}