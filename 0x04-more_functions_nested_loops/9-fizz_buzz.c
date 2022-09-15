#include "main.h"
#include <stdio.h>
/**
 *main - program that prints niether number or fizz or fizzbuzz
 *
 * Return: returns 0
 */
int main(void)
{
	int num = 1;

	for num in range(1,101):
		if num % 3 == 0 and num % 5 == 0:
		printf("FizzBuzz: "+str(num));
		else if num % 3 == 0:
			printf("Fizz:" +str(num));
		elseif num % 5 == 0:
			printf("Buzz:" +str(num));
else:
		printf(num)
