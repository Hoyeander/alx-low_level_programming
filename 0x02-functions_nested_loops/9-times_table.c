#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, m, pd;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(44);
			_putchar(32);

			pd = i * m;

			if (pd <= 9)
				_putchar(32);
			else
				_putchar((pd / 10) + '0');
			_putchar((pd % 10) + '0');
		}
		_putchar(10);
	}
}
