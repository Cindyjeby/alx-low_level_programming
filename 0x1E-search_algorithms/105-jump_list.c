#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list using jump search
 * @list: pointer to the head
 * @size: number of nodes in the list
 * @value:the value to search
 * Return: a pointer to the first node of NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Vlaue checked at index [%ld] =[%d]\n", jump->index, jump->n);
	}
	printf("Vlaue found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Vlaue checked at the index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
