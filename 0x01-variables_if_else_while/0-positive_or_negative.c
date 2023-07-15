#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: A C code that uses if
 * Designed by Timothy Ikejiaku
 *
 * Return: Always (0) (success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive /n", n);
	else if (n == 0)
		printf("%d is 0/n", n);
	else
		printf("%d is negative /n", n);
	return (0);
}
