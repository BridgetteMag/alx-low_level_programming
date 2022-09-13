#include <stdio.h>
/**
 * main -entry point
 *
 * Description: prints all single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
		putchar(ch);
	return (0);
}
