#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: Pointer to the pointer of the head of the list
 * @str: string to be added to the new node
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end;
	char *cp_str;

	if (head == NULL || str == NULL)
	return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	cp_str = strdup(str);
	if (cp_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = cp_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new_node;
	}
	return (new_node);
}
