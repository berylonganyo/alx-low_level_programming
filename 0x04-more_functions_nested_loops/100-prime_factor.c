#include <stdio.h>
#include "main.h"
/**
 * main - Prints the largest prime factor of 612852475143
 * Return: always 0
 */

int main(void)
{
	long int i, n, d;

	n = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}

	return (0);
}

