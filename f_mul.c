#include "monty.h"
/**
 *f_mul - multiplies the second top element of the stack with the top element
 *
 *@h: pointer to first element of the stack
 *@line_number: number of the line of file
 */
void f_mul(stack_t **h, unsigned int line_number)
{
	stack_t *aux;

	if (*h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%i: can't mul, stack too short\n",
			line_number);
		free_dlistint(*h);
		exit(EXIT_FAILURE);
	}
	numb = (*h)->n * (*h)->next->n;
	(*h)->next->n = numb;
	aux = *h;
	*h = (*h)->next;
	free(aux);
}
