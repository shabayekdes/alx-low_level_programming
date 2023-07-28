#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @list: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *list)
{
	size_t el = 0;

	while (list)
	{
		el++;
		list = list->next;
	}
	return (el);
}
