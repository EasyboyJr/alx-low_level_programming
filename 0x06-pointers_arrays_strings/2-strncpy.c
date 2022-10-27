#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to be copied from src
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num = 0, src_len = 0;

	while (src[num++])
		src_len++;

	for (num = 0; src[num] && num < n; num++)
		dest[num] = src[num];

	for (num = src_len; num < n; num++)
		dest[num] = '\0';

	return (dest);
}
