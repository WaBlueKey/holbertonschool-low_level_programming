#include <stdio.h>
#include "lists.h"

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
