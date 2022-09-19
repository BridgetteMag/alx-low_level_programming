#include "main.h"
#include <stdio.h>
/**
 * _puts - this is a function that puts
 * @str: a param to _puts function
 * On success: returns no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar (*(str + i));
		i++;
	}
	_putchar (10);
}
