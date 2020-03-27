#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns a string
 * @s: integer to be used
 * Return: length of string
 */
int _strlen(const char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}

/**
 * add_node_end - adds new nodes to the end of list
 * @head: pointer to head of list
 * @str: string being inputted
 * Return: pointer to head
 */
list_t *add_node_end(list_t **head, char *titular, char *ID, char *patente, char *marca, char *modelo, char *year, char *estado, char *maletero)
{
	list_t *newTail;
	list_t *tmp;

	newTail = malloc(sizeof(list_t));
	if (newTail == NULL)
		return (NULL);

	if (newTail == NULL)
	{
		free(newTail);
		return (NULL);
	}
	newTail->titular = strdup(titular);
	newTail->ID = strdup(ID);
	newTail->patente = strdup(patente);
	newTail->marca = strdup(marca);
	newTail->modelo = strdup(modelo);
	newTail->year = strdup(year);
	newTail->estado = strdup(estado);
	newTail->maletero = strdup(maletero);
	newTail->next = NULL;

	if (*head == NULL)
	{
		*head = newTail;
		return (newTail);
	}

	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newTail;
	return (newTail);
}
