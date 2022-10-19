#ifndef
#define MAIN_H
#include "main.h"
#include <stdio.h>
/**
 * main - sums integers in multiples of integers
 * Return: Always (Success)
 */
int main(void)
{
	int start_num, end_num, total;

	end_num = 1024;
	total = 0;
	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{
			total = total + start_num;
		}
		else
		{
			continue;
		}
	}
	printf("%d", total);
	printf("\n");
	return (0);
}
