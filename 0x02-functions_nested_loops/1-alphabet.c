#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * print_alphabet - function
 *
 * Description: prints the alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
