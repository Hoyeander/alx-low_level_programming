#include "main.h"
/**
 * print_last_digit - Prints last number of number
 * @n: The number tobe checked.
 *
 * Return: Value of the last number
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
