#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an element of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, 0", a[inc]);
		else
			printf("%d", a[inc]);
	}
	_putchar(10);
}
