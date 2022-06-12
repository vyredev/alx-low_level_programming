#include "main.h"

/**
 * _isdigit - checks is parameter is b/n 0 - 9
 * @c: input
 * Return: 1 if input is 0 - 9, 0 if other
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
