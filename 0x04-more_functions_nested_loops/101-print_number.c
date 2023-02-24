#include "main.h"

/**
 * print_number - print
 * @n: intiger
 * Return: Always 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
		putchar((num % 10) + '0');
}
