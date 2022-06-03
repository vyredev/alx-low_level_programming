#include <stdio.h>

/**
 * main - prints 0 - 9
 *
 * return: always 0 (success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
