#include <stdio.h>

/**
 * main - Print alphabet in lower case, and then in upper case
 * Return: Always (0)
 */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
		putchar(ls);

	for (ls = 'A'; ls <= 'Z'; ls++)
		putchar(ls);

	putchar('\n');

	return (0);
}
