#include "main.h"
/**
 * *_memcpy - copy bytes from memory area to another
 * @n: number of bytes to be copied
 * @src: source area for the data to be copied from
 * @dest: destination area for the data
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
