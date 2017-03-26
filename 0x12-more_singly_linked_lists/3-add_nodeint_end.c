#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function to add a node to the end of the list
 * @head: pointer to the head of a list
 * @next: points to the next node
 * @n: integer
 *
 * return: the new element, or NULL if it failed
 *
 * Description: function that adds an elements to the beginning of listint_t
 * list - Task 2 of More singly linked lists project
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* 1. allocate node */
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (last->next == NULL)
	{
		return (NULL);
	}

		last = last->next;
		last->next = new_node;
		return (new_node);
}
