#include "monty.h"
/**
 *main - receive the info, verific Crt+C Crt+D and exit and exec other fu\
nc.
*@argc: number of arguments
*@argv: argments
*
*Return: ) if sucessful
*/

unsigned int numb = 0;

int main(int argc, char **argv)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t checkget = 0;
	FILE *fp;
	char **data;
	stack_t *head;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	(void)argc;
	head = NULL;
	while ((checkget = getline(&buffer, &bufsize, fp)) != -1)
	{
		line_number++;
		buffer[checkget - 1] = '\0';
		data = _strtok(buffer, " ");
		numb = atoi(data[1]);
		check_functions(data, &head, line_number);
	}
	fclose(fp);
	free(buffer);
	return (0);
}
