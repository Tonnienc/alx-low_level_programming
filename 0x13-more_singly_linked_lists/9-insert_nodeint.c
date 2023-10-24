#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts
 * a new node at a specified index.
 * @head: A pointer to a pointer
 * to the head of the list.
 * @idx: The index at which the new
 * node should be added (starting at 0).
 * @n: The integer value to
 * be stored in the new node.
 * Return: The address of the new node,
 * or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	unsigned int i;

	if (new_node == NULL)

		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL)
	{
		free(new_node);

		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
