#include "main.h"
/**
 * _print_rev_recursion - that Prints a string in reverse
 * @s: ponier to the string to be printed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

