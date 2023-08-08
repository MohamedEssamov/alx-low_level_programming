#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **tau;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	tau = malloc(sizeof(int *) * height);

	if (tau == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		tau[x] = malloc(sizeof(int) * width);

		if (tau[x] == NULL)
		{
			for (; x >= 0; x--)
			free(tau[x]);

			free(tau);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		tau[x][y] = 0;
	}

	return (tau);
}
