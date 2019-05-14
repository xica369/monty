#include "lists.h"
/**
 **add_dnodeint_end - adds a new node at the end of a list
 *
 *@head: pointer to head element in the list
 *@n: new element to add
 *
 *Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodo;
	dlistint_t *temp;

	nodo = malloc(sizeof(dlistint_t));
	if (nodo == NULL)
	{
		free(nodo);
		return (NULL);
	}
	nodo->n = n;
	nodo->next = NULL;
	if (*head == NULL)
	{
		nodo->prev = NULL;
		*head = nodo;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nodo;
		nodo->prev = temp;
	}
	return (*head);
}
