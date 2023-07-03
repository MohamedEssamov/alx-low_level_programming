#include "main.h"

/**
 * *_memset - fills the memory with the pointed area
 * @n: number of bytes to be copied
 * @b: char to be copied
 * @s: the pointed memory area
 *
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
