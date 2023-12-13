#include "monty.h"
/**
 * _pchar - prints the character
 * @stack: head of the stack
 * @line_num: line number
 * Return: void
 */
void _pchar(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
