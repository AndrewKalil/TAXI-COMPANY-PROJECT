#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of the list
 * @head: pointer to node
 * @index: number of node identifier
 * Return: pointer to node position
 */
list_t *get_node_at_index(list_t *head, unsigned int index)
{
	unsigned int i;
	list_t *pos;

	pos = head;

	if (head == NULL)
		return (0);
	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		pos = head->next;
		head = pos;
	}
	return (pos);
}
