#include "monty.h"
/**
 *check_functions - check if an argument is a function
 *@argv: arguments as a double pointer
 *@line_number: arguments as a sinble string
 *@head: pointer to first element to list
  */
void check_functions(char **argv, stack_t **head, unsigned int line_number)
{
	int i = 0;
	instruction_t check[] = {
		{"push", f_push},
		{NULL, NULL}
	};

	while (check[i].opcode != NULL)
	{
		if (strcmp(argv[0], check[i].opcode) == 0)
		{
			check[i].f(head, line_number);
			break;
		}
	}
	if (check[i].opcode == NULL)
	{
		printf("L%i: unknown instruction %s\n", line_number, argv[0]);
		exit(EXIT_FAILURE);
	}
}
