#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character being located
 *
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
