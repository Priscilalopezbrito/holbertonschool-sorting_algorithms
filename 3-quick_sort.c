#include "sort.h"

int partition(int *array, int low, int high, size_t size);
void swap_int(int *a, int *b, int *array, size_t size);
void quick_sort_rec(int *array, int low, int high, size_t size);

/**
 * quick_sort- sorts array int using Quick sort algorithm
 * @array: array
 * @size: size
 **/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_rec(array, 0, size - 1, size);
}


/**
 * partition- lomuto partition
 * @array: array
 * @low: low
 * @high: high
 * @size: size
 * Return: i + 1
 **/
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_int(&array[i], &array[j], array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap_int(&array[i + 1], &array[high], array, size);
	}
	return (i + 1);
}


/**
 * swap_int - swap int
 * @a: first value
 * @b:second value
 * @array: array
 * @size:size
 **/
void swap_int(int *a, int *b, int *array, size_t size)
{
	int x = *a;

	if (a != b && *a != *b)
	{
		*a = *b;
		*b = x;
		print_array(array, size);
	}
}


/**
 * quick_sort_rec- quick sort using recursion
 * @array: array
 * @low: left
 * @high: right
 * @size: size
 **/
void quick_sort_rec(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quick_sort_rec(array, low, p - 1, size);
		quick_sort_rec(array, p + 1, high, size);
	}
}
