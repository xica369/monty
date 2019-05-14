#include "lists.h"
/**
*delete_dnodeint_at_index - deletes the node at index index of a linked list
*
*@head: pointer to head element in list
*@index: index of the node that should be deleted
*
*Return: 1 if it succeeded else -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodo, *aux, *sig;
	unsigned int cont;

	aux = *head;
	if (index == 0 && aux != NULL)
	{
		sig = aux->next;
		nodo = aux;
		free(nodo);
		if (sig != NULL)
		{
			sig->prev = NULL;
		}
		*head = sig;
		return (1);
	}
	for (cont = 0; aux != NULL; aux = aux->next, cont++)
	{
		if (cont == index - 1)
		{
			sig = (aux->next)->next;
			nodo = aux->next;
			free(nodo);
			aux->next = sig;
			if (sig != NULL)
			{
				sig->prev = aux;
			}
			return (1);
		}
	}
	return (-1);
}
