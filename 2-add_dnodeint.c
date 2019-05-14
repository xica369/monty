#include "monty.h"
/**
 *f_push - adds a new node at the beginning of a dlistint_t lis
 *
 *@head: pointer to first element of the list
 *@line_number: number of the line of file
 */
void f_push(stack_t **head, unsigned int line_number)
{
	stack_t *nodo;

	(void) line_number;
	nodo = malloc(sizeof(stack_t));
	if (nodo == NULL)
	{
		free(nodo);
		/* return (NULL); */
	}
	nodo->n = numb;
	nodo->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = nodo;
	}
	*head = nodo;
	nodo->prev = NULL;
	/* return (*head); */
}
