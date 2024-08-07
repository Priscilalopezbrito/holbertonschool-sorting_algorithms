#include "sort.h"

/**
 * selection_sort- sorts array using Selection sort algorithm
 * @array: array
 * @size: size
 **/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		/*loop to find smaller int in array*/
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			/*swap*/
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
