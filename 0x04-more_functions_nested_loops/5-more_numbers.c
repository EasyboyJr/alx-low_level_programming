#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 ten times
 */
void more_numbers(void)
{
	int num, time;

	for (time = 0; time <= 9; time++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
