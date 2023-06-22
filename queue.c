#include "monty.h"

/**
 * f_queue - Sets the stack behavior to queue (FIFO)
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifo = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack (queue)
 * @n: New value
 * @head: Head of the stack
 * Return: No return value
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}

	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

