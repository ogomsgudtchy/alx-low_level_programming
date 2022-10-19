#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98, in order
 * @n: The number begin counting at
 * Return: Null, Void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i < 98 ; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n ; i > 98 ; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
