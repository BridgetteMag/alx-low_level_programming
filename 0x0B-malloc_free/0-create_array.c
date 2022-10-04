#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: Size of the array
 * @c: Character to insert
 * Return: Null if size is zero or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;i

			return (array);
}
