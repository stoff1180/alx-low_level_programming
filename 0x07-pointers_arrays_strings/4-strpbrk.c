#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:pointer  input
 * @accept: pointer input
 * Return: pointer to in s the byte(Success) or null
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
