#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strdup - rturns a pointer ot the newly allocated space in memory
 * which contains a copy of the string.
 * @str: string to be copied
 * Return: 0
 */
char *_strdup(char *str)
{
	char *taa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	taa = malloc(sizeof(char) * (i + 1));

	if (taa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		taa[r] = str[r];

	return (taa);
}
