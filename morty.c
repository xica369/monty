#include "monty.h"
int numb = 0;
/**
 *main - receive the info, verific Crt+C Crt+D and exit and exec other fu\
nc.
*@argc: number of arguments
*@argv: argments
*
*Return: ) if sucessful
*/

int main(int argc, char **argv)
{
	char *buffer = NULL, **data;
	size_t bufsize = 0;
	ssize_t checkget = 0;
	FILE *fp;
	stack_t *head;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);	}
	(void)argc;
	head = NULL;
	while ((checkget = getline(&buffer, &bufsize, fp)) != -1)
	{	line_number++;
		buffer[checkget - 1] = '\0';
		data = _strtok(buffer, " ");
		if (data != NULL)
			_nonulldata(data, &head, line_number, buffer, fp);
	}
	free_dlistint(head);
	fclose(fp);
	free(buffer);
	return (0);
}


/**
 *_nonulldata - the main practicallync.
 *
 *@data: pointer to token
 *@head: pointer to first elements to the stack
 *@line_number: numbero of the line of the file
 *@buffer: buffer with the line of the file
 *@fp: file to read
 */
void _nonulldata(char **data, stack_t **head, unsigned int line_number,
		 char *buffer, FILE *fp)
{
	unsigned int i = 0, j = 0;

	if (strcmp(data[0], "nop") == 0 || data[0][0] == '#')
	{
		for (i = 0; data[i] != NULL; i++)
			free(data[i]);
		free(data);
		return;
	}
	numb = 0;
	if (data[1] != NULL)
	{
		numb = atoi(data[1]);
		j = 0;
		if (numb < 0)
			j++;
		for (; data[1][j]; j++)
		{
			if (isdigit(data[1][j]) == 0)
				numb = 0;
		}
	}
	check_functions(data, head, line_number, buffer, fp);
	for (i = 0; data[i] != NULL; i++)
		free(data[i]);
	free(data);
}
