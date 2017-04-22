#include <stdlib.h>
#include "lists.h"

/**
 * gsum_listint - function returns sum of all nodes in list.
 * @head: pointer to the head of a list.
 *
 * return: the new element, or NULL if it failed
 *
 * Description: function that returns the sum of all nodes.
 * Task 8 of More singly linked lists project
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	unsigned int sum = 0;

	if (head)
	{
		current = head;
		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
