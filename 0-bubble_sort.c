#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * bubble_sort - function sort the seeing the adjacent of the array
 * @array: pointer for the array
 * @size : the size of the array hold
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i;
	size_t j;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
