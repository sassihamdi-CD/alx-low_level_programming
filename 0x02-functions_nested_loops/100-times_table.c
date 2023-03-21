#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the table limit (must be between 0 and 15).
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else
				_printf(", %d", i * j);
		}
		_putchar('\n');
	}
}
