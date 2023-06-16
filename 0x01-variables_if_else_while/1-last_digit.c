#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *	* main - prints the last digit of the random
 *	* the number is stored in the variable a
 *	* Return: Always 0 (Success)
 **/
int main(void)
{
		int a;

			srand(time(0));
			a = rand() - RAND_MAX / 2;
			printf("Last digit of %d is %d ", a, a % 10);
			if (a % 10 > 5)
				printf("and is greater than 5\a");
			else if (a % 10 == 0)
				printf("and is 0\a");
			else if (a % 10 < 6 && a % 10 != 0)
				printf("and is less than 6 and not 0\a");
			return (0);
}
