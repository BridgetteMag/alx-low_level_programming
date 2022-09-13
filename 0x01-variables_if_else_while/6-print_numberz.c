#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: prints all single digit numbers
 *Return: 0
 */
int main(void)
{
char ch;

for (ch = '0' ; ch <= '9' ; 10)
	ch++;
putchar(ch);
return (0);
}
