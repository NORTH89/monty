#include "monty.h"

/**
 * _pall - prints all the elements of the stack
 * @stack: head of the stack
 * @line_num: line number
 * Return: void
 */
void _pall(stack_t **stack, unsigned int line_num)
{
	stack_t *curr;
	(void)line_num;

	curr = *stack;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
