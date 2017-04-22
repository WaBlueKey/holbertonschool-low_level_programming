#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function to add a node to the end of the list
 * @head: pointer to the head of a list
 * @next: points to the next node
 * @n: integer
 *
 * return: the new element, or NULL if it failed
 *
 * Description: function that adds an elements to the beginning of listint_t
 * list - Task 2 of More singly linked lists project
 */
 listint_t *add_nodeint_end(listint_t **head, const int n)
 {
 	listint_t *current = *head;
 	listint_t *new_node = malloc(sizeof(listint_t));

 	new_node->n = n;
 	new_node->next = NULL;
 	if (new_node == NULL)
 	{
 		return (NULL);
 	}

 	if (*head == NULL)
 	{
 		*head = new_node;
 	}
 	else
 	{
 		while (current->next != NULL)
 		{
 			current = current->next;
 		}
 		current->next = new_node;
 	}
 	return (new_node);
 }
