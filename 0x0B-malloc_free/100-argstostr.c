#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments of programs
 * @ac: argument count
 * @av: argument vector
 * Return: pointer of array
 */
char *argstostr(int ac, char **av)
{
	char *strup;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	strup = malloc(sizeof(char) * size);
	if (strup == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strup[k++] = av[i][j];
		}
		strup[k++] = '\n';
	}
	strup[k] = '\0';
	return (strup);
}
