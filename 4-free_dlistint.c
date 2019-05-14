#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_dlistint - function that frees a listint_t list
 *
 *@head: pointer to head element in list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodo;

	while (head != '\0')
	{
		nodo = head->next;
		free(head);
		head = nodo;
	}
}
