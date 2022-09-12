#include <stdio.h>
/**
 * main - print in lower case
 *
 * Description: using the main function
 * this program prints alphabets in lower case
 * Retun: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
			putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
