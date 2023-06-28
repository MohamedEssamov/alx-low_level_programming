#include "main.h"
/*
 * _islower - checks whether the character is lowercase
 * or not
 * @c : is the checked character
 * return: 1 when the character is lowercase, otherwise 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
