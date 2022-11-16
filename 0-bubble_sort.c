#include "sort.h"

/**
 * bubble_sort - sorts an array of integers with bubble sort algorithm
 * @array: array to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
size_t h, k, j;
int hold;

if (size < 2)
	return;

for (h = 0; h < size; h++)
{
	for (k = 0; k < size - h - 1; k++)
	{
		if (array[k] > array[k + 1])
		{
			hold = array[k];
			array[k] = array[k + 1];
			array[k + 1] = hold;
			print_array(array, size);
		}
	}
}
}
