#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - performs recurcive binary search
 * @array: pointer to the first element
 * @r: right start of index
 * @l: left end of index
 * @value: value to search for
 * Return: -1 or location of value
 */
int advanced_binary_recursive(int *array, size_t l, size_t r, int value)
{
	size_t k;

	if (r < l)
		return (-1);
	printf("Search in array: ");
	for (k = l; k < r; k++)
		printf("%d, ", array[k]);
	printf("%d\n", array[k]);

	k = l + (r - l) / 2;
	if (array[k] == value && (k == l || array[k - 1] != value))
		return (k);
	if (array[k] >= value)
		return (advanced_binary_recursive(array, l, k, value));
	return (advanced_binary_recursive(array, k + 1, r, value));
}

/**
 * advanced_binary - searches a value in a sort array of ints
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1  if notfound or location of value
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
