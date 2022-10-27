#include "main.h"

/**
 * _strncat - concentrates two strings
 * @dest: Copy from
 * @src: Copy to
 * @n: The number of bytes from syc to be appended to dest
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num = 0, dest_len = 0;

	while (dest[num++])
		dest_len++;

	for (num = 0; src[num] && num < n; num++)
		dest[dest_len++] = src[num];

	return (dest);
}
