#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: the character to be located in the string
 * @s: the string to searched
 *
 * Return: a pointer to the first occurance of the character
 * c in the string s or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
