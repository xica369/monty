#include "monty.h"
/**
 *f_pint - prints the value at the top of the stack
 *
 *@h: pointer to first elment of the stack
 *@line_number: line of the file
 */
void f_pint(stack_t **h, unsigned int line_number)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*h)->n);
}
