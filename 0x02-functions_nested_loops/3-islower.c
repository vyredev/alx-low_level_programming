#include "main.h"

/**
 * _islower - checks if character
 * lowercase or not
 *
 * @c - ASCII character
 *
 * Result: 1 for lowercase, 0 for rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
