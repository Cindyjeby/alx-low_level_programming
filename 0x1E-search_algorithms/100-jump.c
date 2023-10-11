#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * @array: pointer to the first element of the array
 * @size: number ofelements in an array
 * @value: value to search for
 * Return: first index where 'value is located
 * -1 if not present, -1 if NULL
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

/**
 * jump_search - searches for a value in a sorted array
 * of ints using the jump search
 * @array: pointer to the first element of the array
 * @size: number of the elements in the array
 * @value : value to search for
 * Return: first index were it is located
 * -1 if value is not present, and array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t k, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (k = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		k = jump;
		jump += step;
	}
	printf("value found between indexes [%ld] and[%ld]\n", k, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; k < jump && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	printf("value checked array[%ld] = [%d]\n", k, array[k]);

	return (array[k] == value ? (int)k : -1);
}
