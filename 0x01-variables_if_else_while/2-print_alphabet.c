#include <stdio.h>

/**
 * main - main block
 *
 * Description: Using "putchar" to print the alphabet in lowercase.
 *
 * Return: 0
 *
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
