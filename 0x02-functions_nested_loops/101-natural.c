#include <stdio.>

/**
 * main - prints numbers < 1024
 * which are multliples of 3 or 5
 *
 * Return: Always 0
 */
int main (void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0  || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
