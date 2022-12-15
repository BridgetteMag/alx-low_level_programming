#include "main.h"

/**
 * _strlen - a function to get the length of a string
 * @s: string pointer
 * Return: returns length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);

}
