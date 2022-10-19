#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints nxn times table
 *
 * @n: maximum multiple of times table
 *
 * Description: This will print a times table formed by nxn multiplications
 *
 * for n = 0 - 15
 *
 * Return: Always return n
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
		for (b = 1; b <= n; b++)
		{
		c = (a * b);
		if (b != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (c < 10 && b != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar((c % 10) + '0');
		}
		else if (c >= 10 && c < 100)
		{
			_putchar(' ');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		else if (prod >= 100 && x != 0)
		{
			_putchar((c / 100) + '0');
			_putchar((c / 10) % 10 + '0');
			_putchar((c % 10) + '0');
		}
		else
			_putchar((c % 10) + '0');

		}
		}
		_putchar('\n');
	}
}
