#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *_strdup - duplicate to new memory space location
 *@str: char
 *Return: 0
 */
char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	a = malloc(strlen(str) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	strcpy(a, str);
	return (a);
}
