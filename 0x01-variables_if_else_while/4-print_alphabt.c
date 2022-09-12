#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabets in lowercase followed by a new line
 *
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
