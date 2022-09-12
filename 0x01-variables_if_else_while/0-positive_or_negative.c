#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive, negative, or zero
 *
 * Description: using the mian function
 * this program prints "numbers stored in postive,negative or zero"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2
	
	if (n > 0)
		printf("%d is positive\n", n);
	if else (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);}			
