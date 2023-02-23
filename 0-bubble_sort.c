#include "sort.h"

/**
 * bubble_sort - a function that sorts an array in ascending order using 
 * bubble algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the @array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (j = size; j > 1; j--)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
