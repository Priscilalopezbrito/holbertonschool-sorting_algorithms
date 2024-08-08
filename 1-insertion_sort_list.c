#include "sort.h"

void swap(listint_t **list, listint_t *left, listint_t *right);

/**
 * insertion_sort_list- sorts a doubly linked list in ascending
 * order using Insertion sort algorithm
 * @list: list
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;
	listint_t *next = current->next;

	if (!list || !*list || !(*list)->next)
	{
		return;
	}
	while (current)
	{
		next = current->next;
		while (current->prev && current->prev->n > current->n)
		{
			swap(list, current->prev, current);
		}
		current = next;
	}
}


/**
 * swap- swap nodes
 * @list: list
 * @left: left
 * @right: right
 **/
void swap(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev)
	{
		left->prev->next = right;
	}
	else
	{
		*list = right;
	}
	if (right->next)
	{
		right->next->prev = left;
	}
	left->next = right->next;
	right->prev = left->prev;
	left->prev = right;
	right->next = left;
	print_list(*list);
}
