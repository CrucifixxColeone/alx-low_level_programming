#include "main.h"
#include <stdio.h>

/**
*print_array - Prints n elements of an array of integers
*@a: arrays of integers
*Return: void
*/
void print_array(int *a, int)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
