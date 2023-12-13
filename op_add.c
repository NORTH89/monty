#include "monty.h"
/**
 * _add - add the top two elements of stack
 * @stack: head
 * @line_num: line_numumber
 * return: void
 */
void _add(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	_pop(stack, line_num);
}
