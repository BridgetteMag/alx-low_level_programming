#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: 1st param
 * @src: 2nd param
 * @n: 3rd param
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
