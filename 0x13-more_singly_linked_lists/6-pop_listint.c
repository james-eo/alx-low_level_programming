#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int n_node;
	listint_t *temp;
	listint_t *count;

	if (*head == NULL)
		return (0);

	count = *head;

	n_node = count->n;

	temp = count->next;

	free(count);

	*head = temp;

	return (n_node);
}
