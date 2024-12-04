#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete the node at index.
 * @head: Pointer to the head of the list
 * @index: index of the node that should be deleted. Start at 0
 *
 * Return: 1 if it succeeded and -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	return (-1);

	temp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
	current->next->prev = current->prev;
	free(temp);

	return (1);
}
