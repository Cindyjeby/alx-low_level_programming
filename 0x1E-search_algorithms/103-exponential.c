#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * _binary_search - searches for the value to be sorted
 * @array: array of ints
 * @l: left
 * @r: right
 * @value: value
 * Return: -1 if not found || index of value
 */
int _binary_search(int *array, size_t l, size_t r, int value)
{
	size_t k;

	if (array == NULL)
		return (-1);

	while (r >= l)
	{
		printf("Searching in array: ");
		for (k = l; k < r; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);

		k = l + (r - l) / 2;
		if (array[k] == value)
			return (k);
		if (array[k] > value)
			r = k - 1;
		else
			l = k + 1;
	}
	return (-1);
}

/**
 * exponential_search- searches for a value in a sorted array
 * @array: pointer to the first element
 * @size: the value to search in an array
 * @value: the value of the search
 * Return: index of the value of -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t k = 0;
	size_t r;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] != value)
	{
		for (k = 1; k < size && array[k] <= value; k *= 2)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	}
	r = k < size ? k : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", k / 2, r);
	return (_binary_search(array, k / 2, r, value));
}
