#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to delete a node from the list
 * @head: pointer to the head of a list
 *
 * Return: the new element, or NULL if it failed
 *
 * Description: function that deletes a node in listint_t
 * Task 6 of More singly linked lists project
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int node_store;

	if (*head && head)
	{
		current = *head;
		node_store = current->n;
		*head = current->next;
		free(current);
	}
	else
	{
		return (0);
	}
	return (node_store);
}
