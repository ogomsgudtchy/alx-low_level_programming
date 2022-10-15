#include <stdio.h>
/**
 * main - program that prints all possible different combinations of three digits
 *  Numbers must be separated by ,followed by a space
 *  The two digits must be different
 *  012, 120, 102, 021, 201, 210 are considered the same combination
 *   Return: 0

*/
int main(void)
{
	char c;
	int i;
	double d;
	float f;

	printf("Size of a char: %lu", (unsigned long)sizeof(c));
	printf(" byte(s)\n");
	printf("Size of an int: %lu", (unsigned long)sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(d));
	printf(" byte(s)\n");
	printf("Size of a float: %lu", (unsigned long)sizeof(f));
	printf(" byte(s)\n");
	return (0);
}

