#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deltes a node at a given position
 * @head: pointer to pointer to node
 * @index: position of node to be deleted
 * Return: 1 for success -1 if fail
 */
int delete_node_at_index(list_t **head, unsigned int index)
{
	unsigned int i;
	list_t *tmp = *head;
	list_t *atm = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
	}
	atm = tmp->next;
	tmp->next = atm->next;
	free(atm);

	return (1);
}
