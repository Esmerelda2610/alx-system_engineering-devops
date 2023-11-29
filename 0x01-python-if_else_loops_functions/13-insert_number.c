#include "lists.h"

/**
 * insert_node - inserts number into a sorted singly-linked list.
 * @header: A pointer to the linked list.
 * @number: The number to insert.
 * Author: ELIZABETH MOTSINONE
 * Return: If the function fails - NULL.
 * 	   Otherise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n == number;

	if (node == NULL || node-> >= number)
	{
		new->next = node;
		*head = new;
		return (new);

	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);

}
