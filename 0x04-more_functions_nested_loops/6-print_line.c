#include "main.h"
#include <stdio.h>
/**
 * print_line - draws straight line in terminal
 * @n: parameter
 * Return: returns nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
