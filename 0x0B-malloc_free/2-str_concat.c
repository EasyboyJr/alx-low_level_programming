#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int num, concat_num = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (num = 0; s1[num] || s2[num]; num++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (num = 0; s1[num]; num++)
		concat_str[concat_num++] = s1[num];

	for (num = 0; s2[num]; num++)
		concat_str[concat_num++] = s2[num];

	return (comcat_str);
}
