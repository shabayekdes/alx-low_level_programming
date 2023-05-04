#include <stdio.h>

#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned long int i, flag = 0;

	for (i = 0UL; i < sizeof(unsigned long int) * 8UL; i++)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (!flag)
	{
		_putchar('0');
	}
}
