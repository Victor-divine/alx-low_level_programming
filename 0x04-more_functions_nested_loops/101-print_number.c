#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		ni = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
		putchar((n1 % 10) + '0');
	}
}
