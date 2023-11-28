#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked lists
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *head);
listint_t *add_nodeint_end(listint_t **head);
void free_listint(listint_t *head);
listint_t *insert_node(listint_t **head);

#endif /* LISTS_H