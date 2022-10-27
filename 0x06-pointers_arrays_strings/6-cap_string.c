#include "holberton.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int num = 0;

	while (str[num])
	{
		while (!(str[num] >= 'a' && str[num] <= 'z'))
			num++;

		if (str[num - 1] == ' ' ||
		    str[num - 1] == '\t' ||
		    str[num - 1] == '\n' ||
		    str[num - 1] == ',' ||
		    str[num - 1] == ';' ||
		    str[num - 1] == '.' ||
		    str[num - 1] == '!' ||
		    str[num - 1] == '?' ||
		    str[num - 1] == '"' ||
		    str[num - 1] == '(' ||
		    str[num - 1] == ')' ||
		    str[num - 1] == '{' ||
		    str[num - 1] == '}' ||
		    num == 0)
			str[index] -= 32;

		num++;
	}

	return (str);
}
