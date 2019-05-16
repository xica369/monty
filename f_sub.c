#include "monty.h"
/**
 *f_sub - subtracts the top element of the stack from the second top element
 *
 *@h: pointer to first element of the stack
 *@line_number: number of the line of file
 */
void f_sub(stack_t **h, unsigned int line_number)
{
        stack_t *aux;

        if (*h == NULL || (*h)->next == NULL)
        {
                fprintf(stderr, "L%i: can't sub, stack too short\n",
                        line_number);
                free_dlistint(*h);
                exit(EXIT_FAILURE);
        }
        numb = (*h)->next->n - (*h)->n;
        (*h)->next->n = numb;
        aux = *h;
        *h = (*h)->next;
        free(aux);
}
