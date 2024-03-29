#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 *  locates the first occurrence in the string s of any of the
 *  bytes in the string accept
 * @s: pointer to s
 * @accept: pointer to accept
 *
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}
	}
	return (0);
}
