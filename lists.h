#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *titular;
	char *ID;
	char *patente;
	char *marca;
	char *modelo;
	char *year;
	char *estado;
	char *maletero;
	struct list_s *next;
} list_t;

size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, char *titular, char *ID, char *patente, char *marca, char *modelo, char *year, char *estado, char *maletero);
list_t *get_node_at_index(list_t *head, unsigned int index);
int delete_node_at_index(list_t **head, unsigned int index);
int _strlen(const char *s);

#endif
