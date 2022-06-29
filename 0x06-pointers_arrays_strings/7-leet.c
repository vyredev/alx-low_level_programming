#include "main.h"

/**
 * leet - encode into 1337
 * @n: input
 *
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == c1[j])
			{
				n[i] = c2[j];
			}
		}
	}
	return (n);
}
