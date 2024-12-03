#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that frees dlistint_t
 * @head: Pointer to the head of the list
 * @index: index is the index of the node start from 0
 * Return: The number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}

	return (NULL);
}
