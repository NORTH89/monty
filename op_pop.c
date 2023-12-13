#include "monty.h"
/**
 * _pop - removes the top element of the stack
 * @stack: head of the stack
 * @line_num: line number
 * Return: void
 */
void _pop(stack_t **stack, unsigned int line_num)
{
	stack_t *head;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}
	head = *stack;
	*stack = head->next;

	if (*stack != NULL)
		(*stack)->prev = NULL;

	free(head);
}
