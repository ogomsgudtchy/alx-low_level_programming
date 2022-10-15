#include<stdio.h>
/**
 *	main - takes unspecificed number of arguments and returns value on
*	a program that prints the lowercase alphabet in reverse followed by a new line
* Return:: 0
*/
int main(void)
{
	int al;

	for (al = 122; al >= 97; --al)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
