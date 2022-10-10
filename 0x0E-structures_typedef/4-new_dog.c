#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - new dog
 * @name: new name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *daisy_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		daisy_dog = malloc(sizeof(dog_t));

		if (daisy_dog == NULL)
			return (NULL);

		daisy_dog->name = malloc(sizeof(char) * name_l);

		if (daisy_dog->name == NULL)
		{
			free(daisy_dog);
			return (NULL);
		}

		daisy_dog->owner = malloc(sizeof(char) * own_l);

		if (daisy_dog->owner == NULL)
		{
			free(daisy_dog->name);
			free(daisy_dog);
			return (NULL);
		}

		daisy_dog->name = _strcpy(daisy_dog->name, name);
		daisy_dog->owner = _strcpy(daisy_dog->owner, owner);
		daisy_dog->age = age;
	}
	return (daisy_dog);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
