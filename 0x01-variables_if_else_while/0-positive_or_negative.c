#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * description: prints if a number is positive, negative.
 * return : always 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if
	{
		printf("%d is negativ\n", n);
	}
	return (0);
}
