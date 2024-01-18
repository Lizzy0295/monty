#include "monty.h"

/**
 * f_queue - Prints d top
 * @head: stack head
 * @counter: number line
 * Return: nothing
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void) head;
	(void) counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds node to d stack tail
 * @n: new value
 * @head: stack head
 * Return: nothing
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
