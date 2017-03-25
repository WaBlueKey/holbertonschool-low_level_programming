/**
 * print_listint - function to print and count nodes in a list
 * @h: pointer to the head of a list
 * @count: integer to keep count of the number of nodes
 * @next: points to the next node
 * @n: integer
 *
 * Description: function that prints all the elements of a listint_t list
 * for Holberton project - Task 0 of More singly linked lists project
 */

#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{

	size_t count = 0;

  /* Loop to iterate over list to print and count nodes. */
	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	/* Return number of nodes in list. */
	return (count);
}
