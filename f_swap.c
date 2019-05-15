#include "monty.h"
/**
 *f_swap - prints the value at the top of the stack
 *
 *@h: pointer to first elment of the stack
 *@line_number: line of the file
 */
void f_swap(stack_t **h, unsigned int line_number)
{
	if (*h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	numb = (*h)->n;
	(*h)->n = (*h)->next->n;
	(*h)->next->n = numb;
}
