#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @m: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *m)
{
	if (*m)
	{
		_putchar(*m);
		_puts_recursion(m + 1);
	}
	else
	{
		_putchar('\n');
	}
}
