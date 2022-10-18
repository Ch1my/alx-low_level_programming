#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	printf("last digit of %d is %d", n, n % 10);
	if (k == 0)
	{
		printf("and is 0\n");
	}
	else if (k < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
		printf("and is greater than 5\n");
	printf("\n");
	return (0);
}
