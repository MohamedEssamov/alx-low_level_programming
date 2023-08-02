#include "main.h"

/**
 * _strlen_recursion - returns the lengths of a string
 * @s: string to be given to get its lengths
 * Return: string lengths
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
