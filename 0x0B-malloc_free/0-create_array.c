#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars and initializes
 * with a specific char
 * @size : the size of the array
 * @c : the char to be initialized with
 *
 * Return: pointer to the array if success, NULL if error.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}