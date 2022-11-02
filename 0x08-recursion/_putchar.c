#include "main.h"
#include "unistd.h"

/**
 * _putchar - Writes the character c to the stdout
 * @c: The character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
