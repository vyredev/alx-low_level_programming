#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2nd grid
 * @grid: pointer to array
 * @height: no. of rows
 * Return: nothing, free memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
