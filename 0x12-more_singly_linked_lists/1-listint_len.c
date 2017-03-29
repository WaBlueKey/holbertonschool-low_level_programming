#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function returns the number of elements in a list
 * @h: pointer to the head of a list
 *
 * Return: returns the number of elements of a list
 */

size_t listint_len(const listint_t *h)
{

	size_t count = 0;

  /* Loop to iterate over list to print and count nodes. */
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	/* Return number of nodes in list. */
	return (count);
}
