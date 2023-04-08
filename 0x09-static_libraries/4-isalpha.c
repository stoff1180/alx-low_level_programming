#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: parameters to be checked
 * Return: return 1 if c a letter, and return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
