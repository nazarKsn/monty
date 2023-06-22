#include "monty.h"

/**
 * f_pchar - Prints the char at the top of the
 * stack, followed by a new line
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n < 0 || h->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	putchar(h->n);
	putchar('\n');
}
