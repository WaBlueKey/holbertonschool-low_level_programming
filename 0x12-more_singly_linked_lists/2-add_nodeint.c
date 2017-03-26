#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function to add a node to the beginning of the list
 * @head: pointer to the head of a list
 * @next: points to the next node
 * @n: integer
 *
 * return: the new element, or NULL if it failed
 *
 * Description: function that adds an elements to the beginning of listint_t
 * list - Task 2 of More singly linked lists project
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
