#include "main.h"

/**
 * print_numbers - prints 0 - 9
 * Return: none
 */
void print_numbers(void)
{
	int ch;

	for(ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
