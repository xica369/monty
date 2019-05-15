#include "monty.h"
/**
*f_pop - removes the top element of the stack
*
*@h: pointer to head element in list
*@index: index of the node that should be deleted
*/
void f_pop(stack_t **h, unsigned int line_number)
{
	stack_t *nodo, *aux, *sig;

	aux = *h;
	if (*h == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	sig = aux->next;
	nodo = aux;
	free(nodo);
	if (sig != NULL)
	{
		sig->prev = NULL;
	}
	*h = sig;
}
