#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list
 *
 * @h: pointer to list_t
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;


	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
