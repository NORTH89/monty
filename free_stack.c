#include "monty.h"

/**
 * _free_stack - frees the stack
 * @stack: head of the stack
 * Return: void
 */
void _free_stack(stack_t **stack)
{
	stack_t *curr = *stack;
	stack_t *tmp;

	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*stack = NULL;
}
