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
	stack_t *head2 = *h;
	(void)line_number;

	for (i = 0; head2 != NULL; head2 = head2->next, i++)
	{
		printf("%d\n", head2->n);
	}
}
