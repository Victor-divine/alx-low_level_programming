#include <unstd.h>
#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: 0
*/
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
