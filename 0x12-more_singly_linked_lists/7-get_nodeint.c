#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - to delete the first node of the linked
 * list and return its value.
 * @head: Current head node of type struct listint_t.
 * @index: the location of the node in the list.
 *
 * Return: returns the value n, at the given index.
 * Task 7 of More singly linked lists project
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	i = 0;
	if (head)
	{
		current = head;
		while (i < index)
		{
			current = current->next;
			i++;
			if (!(current))
			{
				return (NULL);
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (current);
}
