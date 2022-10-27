i#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of element in the array
 */
void reverse_array(int *a, int n)
{
	int ls, num;

	for (num = n - 1; num >= n / 2; num--)
	{
		ls = a[n - 1 - num];
		a[n - 1 - num] = a[num];
		a[num] = ls;
	}
}
