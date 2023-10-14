#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - search for value in a sorted array
 * @array: pointer to the first element
 * @size: the number of elements in an arry
 * @value: the value to search
 * Return: location of firstindex
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t k, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= 1;)
	{
		k = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (k < size)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", k);
			break;
		}
		if (array[k] == value)
			return (k);
		if (array[k] > value)
			r = k - 1;
		else
			l = k + 1;
	}

	return (-1);
}
