#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function to delete a list
 * @head: pointer to the head of a list
 *
 * return: the new element, or NULL if it failed
 *
 * Description: function that deletes a listint_t
 * Task 4 of More singly linked lists project
 */
void free_listint(listint_t *head)
{
	listint_t *current = NULL;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
