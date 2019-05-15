#include "monty.h"
/**
 *f_add - prints the value at the top of the stack
 *
 *@h: pointer to first elment of the stack
 *@line_number: line of the file
 */
void f_add(stack_t **h, unsigned int line_number)
{
	stack_t *aux;

	if (*h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%i: can't add, stack too short\n",
			line_number);
		free_dlistint(*h);
		exit(EXIT_FAILURE);
	}
	numb = (*h)->n + (*h)->next->n;
	(*h)->next->n = numb;
	aux = *h;
	*h = (*h)->next;
	free(aux);
}
