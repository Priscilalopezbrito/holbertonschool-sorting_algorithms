#include "sort.h"
/**
 * insertion_sort_list- sorts a doubly linked list in ascending
 * order using Insertion sort algorithm
 * @list: list
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = list;
	while (current != NULL)
	{
		listint_t *next = current->next;
		current->prev = current->next = NULL;
		insertion_sort_list(&sorted, current);
		current = next;
	}
	*list = sorted;
	print_list(*list);
}
