#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function to delete a list
 * @head: pointer to the head of a list
 *
 * return: void
 *
 * Description: function that deletes a listint_t
 * Task 5 of More singly linked lists project
 */
void free_listint2(listint_t **head)
{
	listint_t *current; /* to traverse the list */
	listint_t *i;

	if (!head) /* For an empty list return nothing. */
	{
		return;
	}
	else
	{
		current = *head;
		while (current != NULL)
		{
			i = current->next;
			free(current);
			current = i;
		}
	}
	*head = NULL;
}
