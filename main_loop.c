#include "main.h"

/**
 * main_loop - a function that loops forever like a shell
 *
 * Return: None.
 */

void main_loop(void)
{
char *line, **lineArgs;
int stat;

/* The main shell loop */
do {
printf("#cisfun$ ");

/* read the command line */
line = _getline();

/* get arguments from the command line */
lineArgs = line_args(line);

/* execute the command line */
stat = line_executer(lineArgs);

free(line);
free(lineArgs);
} while (stat);

}
