#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98, in order
 * seperated by a comma followed by a space
 * @n: The number begin counting at
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i < 98 ; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n ; i > 98 ; i--)
		{
			printf("%d, ", i);
		}
	}	}
	else
	{
		printf("98\n");
	}
}
