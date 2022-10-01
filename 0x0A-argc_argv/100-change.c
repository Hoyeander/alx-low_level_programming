#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: number of command line arguements
 * @argv: array of pointers to the command line arguements
 *
 * Return: 0 Always successful
 */
int main(int argc, char **argv)
{
	int cents, ncoins = 0;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
