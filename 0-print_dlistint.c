#include "monty.h"
/**
 *f_pall - prints all the elements of a dlistint_t list
 *
 *@h: pointer to first element of list
 *@line_number: number of the line of file
 */
void f_pall(stack_t **h, unsigned int line_number)
{
	unsigned int i;
	(void)line_number;

	for (i = 0; *h != NULL; *h = (*h)->next, i++)
	{
		printf("%d\n", (*h)->n);
	}
}
