#include "monty.h"

/**
 * _pint - prints the top element of the stack
 * @stack: head of the stack
 * @line_num: line number
 * Return: void
 */

void _pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
