#include "sort.h"
/**
 * bubble_sort- sorts array in ascending order using Bubble sort
 * @array: array
 * @size: size of array
 **/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				/*swap*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
