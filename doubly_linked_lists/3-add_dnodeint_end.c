#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of the list
 * @head: Pointer to the head of the list
 * @n: integer
 * Return: The number of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *end;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	end = *head;

	while (end->next != NULL)
	{
		end = end->next;
	}
		end->next = new_node;
		new_node->prev = end;
	return (new_node);
}
