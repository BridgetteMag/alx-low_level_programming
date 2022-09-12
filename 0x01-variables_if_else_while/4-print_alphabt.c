#include <stdio.h>
/**
 * main - prints alphabet in lowercase follwed by a new line
 *
 * Description: prints alphabets
 * this program prints alphabets in lowercasefollowed by a new line
 * Retun: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
	putchar('\n');
	return (0);
}
