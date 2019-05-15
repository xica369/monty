#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


extern unsigned int numb;
void finallyfree(char **p, int i);
char **_strtok(char *str, char *delim);
void free_dlistint(stack_t *head);
stack_t *add_dnodeint_end(stack_t **head, const int n);
void f_push(stack_t **head, unsigned int line_number);
void check_functions(char **argv, stack_t **head, unsigned int line_number,
		     char *buf, FILE *fp);
void f_pall(stack_t **h, unsigned int line_number);
void f_pint(stack_t **h, unsigned int line_number);
void f_pop(stack_t **h, unsigned int line_number);
void f_swap(stack_t **h, unsigned int line_number);
void f_add(stack_t **h, unsigned int line_number);
void _free(char **argv, stack_t **head, char *buf, FILE *fp);

#endif
