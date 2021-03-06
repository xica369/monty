#include "monty.h"
/**
 *_free - free memory
 *
 *@argv: arguments as a double pointer
 *@head: pointer to first element to stack
 *@buf: buffer
 *@fp: file to read
 *@i: counter of the functions
 */
void _free(char **argv, stack_t **head, char *buf, FILE *fp, int i)
{
	int j;

	for (j = 0; argv[j]; j++)
		free(argv[j]);
	free(argv);
	free(buf);
	fclose(fp);
	if (*head != NULL && i < 4)
		free_dlistint(*head);
}
