#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char ls;

	for (ten = 0; ten <= 9; ten++)
	{
		for (ls = 'a'; ls <= 'z'; ls++)
			_putchar(ls);
		_putchar('\n');
	}
}
