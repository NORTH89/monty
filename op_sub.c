#include "monty.h"
/**
 * _sub - subtract the top two elements of the stack
 * @stack: head of the stack
 * @line_num: line number
 * Return: void
 */

void _sub(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;
	_pop(stack, line_num);
}
