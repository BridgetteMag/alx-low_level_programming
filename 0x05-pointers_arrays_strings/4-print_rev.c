#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed in reverse
 * Return: Nothing
 *
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar(10);
}
