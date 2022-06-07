#include "main.h"

/**
 * _isalpha - recognizes alphabet
 * 
 * @c: ASCII character
 *
 * Return: 1 if alphabet, 0 if other
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
