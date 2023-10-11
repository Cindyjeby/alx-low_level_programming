#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches foran int in a sorted int array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value being searched for
 * Return: position of the value
 * -1 if value is not found in array
 *  -1 if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first;
	size_t mid;
	size_t last;
	size_t k;

	mid = size - 1;
	if (array == NULL)
		return (-1);
	while (last <= mid)
	{
		printf("Searching in array:");
		for (k = last; k <= mid; k++)
		{
			if (k < mid)
				printf(" %d,", array[k]);
			else
				printf(" %d\n", array[k]);
		}
		first = (last + mid) / 2;
		if (value == array[first])
			return (first);
		else if (value > array[first])
			last = first + 1;
		else
			mid = first - 1;
	}
	return (-1);
}
