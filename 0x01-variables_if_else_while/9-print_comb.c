#include <stdio.h>

/**
 * main - prints 0 - 9 with commas and spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	puthcar('\n');
	return (0);
}
