#include "main.h"

/**
 * more_numbers - prints 0 - 14 (10x)
 * Return: none
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; i < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
