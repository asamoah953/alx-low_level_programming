#include "main.h"

/**
 * print_times_table - print n times table
 * @n: parameter
 */

void print_times_table(int n)
{
	int digit, mult, result;

	if (n <=15 && n >= 0)
	for (digit = 0; digit <= n; digit++)
		{
		_putchar(',');
		_putchar(',');
		result = digit * mult;
		if (result <= 99)
			_putchar(' ');
		if (result <=100)
		{
		_putchar((result / 100) + '0');
		_putchar(((result /10) % 10) + '0');
		}
}
