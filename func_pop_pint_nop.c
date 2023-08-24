#include "monty.h"

/**
 * f_pop - This function prints the top node on stack
 * @head: Is the pointer to pointer of first node
 * @counter: Is the line counter
 *
 * Return: nothing
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	*head = h->next;
	free(h);
}

/**
 * f_pint - Is print top node on stack
 * @head: Is the pointer to pointer of first node
 * @counter: Is the line counter
 *
 * Return: returns nothing
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}

/**
 * f_nop - This functio does nothing
 * @head: Is the pointer to pointer of first node
 * @counter: Is the line counter
 *
 * Return: returns nothing
 */

void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
