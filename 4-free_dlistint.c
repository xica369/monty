#include "monty.h"
/**
 *free_dlistint - function that frees a listint_t list
 *
 *@head: pointer to head element in list
 */
void free_dlistint(stack_t *head)
{
	stack_t *nodo;

	while (head != '\0')
	{
		nodo = head->next;
		free(head);
		head = nodo;
	}
}
