#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints,
 * using the linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value being searched for
 * Return: first index where 'value is located
 * -1 if value is not present
 *  -1 if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (size == 0)
		return (-1);
	while (k < size)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
		k++;
	}
	return (-1);
}
