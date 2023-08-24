#include "monty.h"

/**
 * free_stack - Frees the  freedoubly linked list
 * @head: Is the first node of stack
 * Return: returns nothing
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * f_stack - frees the stack
 * @head: The first node(unused)
 * @counter: The line counter (unused)
 *
 * Return: returns nothing
*/

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;

	bus.lifi = 0;
}
