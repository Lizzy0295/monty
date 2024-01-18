#include "monty.h"

/**
 * f_pall - Prints d stack
 * @head: stack ead
 * @counter: unused
 * Return: nothing
 */
void f_pall(stack_t **head, unsigned  int counter)
{
	stack_t *h;
	(void) counter;

	h = *head;
	if (h == NULL)
	{
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
