#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - returns an integer that indicates if
 * the node at index has been deleted.
 * @head: Current head node of type struct listint_t.
 * @index: Index where the node is to be inserted.
 *
 * Return: returns an integer 1 if it deletes the node or
 * -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *deleted;
	unsigned int i = 0; /* iterator */

	current = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	while (current != NULL) /* iterate through the list */
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(current);
			return (1);
		}
		else if (i == (index - 1))
		{
			deleted = current->next;
			current->next = current->next->next;
			free(deleted);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
