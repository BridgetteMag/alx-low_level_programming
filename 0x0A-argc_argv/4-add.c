#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Adss positive numbers
 * @argc: argument
 * @argv: argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *p;

		if (argc > 1)
		{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];

			for (j = 0; j < strlen(p); j++)
			{
				if (p[j] < 48 || p[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(p);
			p++;
		}
		printf("%d\n", sum);
		}
		else
		{
			printf("0\n");
		}
	return (0);
}
