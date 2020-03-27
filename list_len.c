#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: pointer to struct
 * Return: number of elements in struct
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
