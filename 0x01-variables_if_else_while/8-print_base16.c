#include <stdio.h>

/**
 * main - Print base 16 number in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char ls;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ls = 'a'; ls <= 'f'; ls++)
		putchar(ls);

	putchar('\n');

	return (0);
}
