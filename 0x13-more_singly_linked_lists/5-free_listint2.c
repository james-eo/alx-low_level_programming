#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of a list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t *count;

	if (head != NULL)
	{
		count = *head;
		while ((list = count) != NULL)
		{
			count = count->next;
			free(list);
		}
		*head = NULL;
	}
}
