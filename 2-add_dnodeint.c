#include "lists.h"
/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t lis
 *
 *@head: pointer to first element of the list
 *@n: the value of the parameter n in the list
 *
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodo;

	nodo = malloc(sizeof(dlistint_t));
	if (nodo == NULL)
	{
		free(nodo);
		return (NULL);
	}
	nodo->n = n;
	nodo->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = nodo;
	}
	*head = nodo;
	nodo->prev = NULL;
	return (*head);
}
