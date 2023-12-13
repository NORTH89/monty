#include "monty.h"
/**
 * _mod - divides the second top element of the stack
 * @stack: head
 * @line_num: line number
 * Return: void
 */

void _mod(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_num);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n;
	_pop(stack, line_num);
}
