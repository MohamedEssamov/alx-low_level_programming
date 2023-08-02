#include "main.h"

/**
 * factorial - to get the factorial of a number
 * @n: number to get its factorial
 * Return: the factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
