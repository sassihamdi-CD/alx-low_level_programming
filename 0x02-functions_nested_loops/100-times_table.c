#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 if succesful
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15) {
	return; // if n is out of range, don't print anything
	}
	for (int i = 0; i <= n; i++) {
	for (int j = 0; j <= n; j++) {
	printf("%d ", i * j); // print the product of i and j
	}
	printf("\n"); // start a new line after each row
	}
	}
}
