#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description - Prints a random number and states wether
 * it is positive,negative or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ( n > 0 )
		printf("positive");
	else if (n < 0 )
		printf("negative");
	else 
		printf("zero");

	return (0);
}

