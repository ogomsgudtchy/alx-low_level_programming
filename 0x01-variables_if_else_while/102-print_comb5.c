#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - program that prints all possible combinations of two two-digit
 *  The numbers should range from 0 to 99
 *  Numbers must be separated by ,followed by a space
 *  All numbers should be printed with two digits. 1 should be printed as 01
 *  Return: 0
 */

int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{
		for(q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (p == 98 && q == 99)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
