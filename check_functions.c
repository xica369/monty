#include "monty.h"
/**
 *check_functions - check if an argument is a function
 *@argv: arguments as a double pointer
 *@line_number: arguments as a sinble string
 *@head: pointer to first element to list
 */
void check_functions(char **argv, stack_t **head, unsigned int line_number,
		     char *buf, FILE *fp)
{
	unsigned int i = 0, j = 0;
	instruction_t check[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pint", f_pint},
		{"pop", f_pop},
		{"swap", f_swap},
		{"add", f_add},
		{NULL, NULL}
	};

	while (check[i].opcode != NULL)
	{
		if (strcmp(argv[0], check[i].opcode) == 0)
		{
			if (i == 0 && numb == 0)
			{
				if (argv[1] == NULL
				    || strcmp(argv[1], "0") != 0)
				{
					fprintf(stderr,
						"L%i: usage: push integer\n",
						line_number);
					for (j = 0; argv[j]; j++)
						free(argv[j]);
					free(argv);
					free(buf);
					fclose(fp);
					free_dlistint(*head);
					exit(EXIT_FAILURE);
				}
			}
			if ((i == 2 || i == 3) && *head == NULL)
			{
				for (j = 0; argv[j]; j++)
					free(argv[j]);
				free(argv);
				free(buf);
				fclose(fp);
			}
			if ((i == 4 || i == 5) &&
			    (*head == NULL || (*head)->next == NULL))
			{
				for (j = 0; argv[j]; j++)
					free(argv[j]);
				free(argv);
				free(buf);
				fclose(fp);
			}
			check[i].f(head, line_number);
			break;
		}
		i++;
	}
	if (check[i].opcode == NULL)
	{
		fprintf(stderr, "L%i: unknown instruction %s\n", line_number,
			argv[0]);
		exit(EXIT_FAILURE);
	}
}
