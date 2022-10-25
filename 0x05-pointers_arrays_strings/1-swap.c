#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
