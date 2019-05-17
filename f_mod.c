#include "monty.h"
/**
 *f_mod - divides the second top element of the stack by the top element
 *
 *@h: pointer to first elmente of the stack
 *@line_number: numbero of the line in the file
 */
void f_mod(stack_t **h, unsigned int line_number)
{
	stack_t *aux;

	if (*h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%i: can't mod, stack too short\n",
			line_number);
		free_dlistint(*h);
		exit(EXIT_FAILURE);
	}
	if ((*h)->n == 0)
	{
		fprintf(stderr, "L%i: division by zero\n", line_number);
		free_dlistint(*h);
		exit(EXIT_FAILURE);
	}
	numb = (*h)->next->n % (*h)->n;
	(*h)->next->n = numb;
	aux = *h;
	*h = (*h)->next;
	free(aux);
}
