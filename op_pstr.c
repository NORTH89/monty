#include "monty.h"
/**
 * _pstr - prints the string
 * @stack: head of the stack
 * @line_num: line number
 * Return: void
 */
void _pstr(stack_t **stack, unsigned int line_num)
{
	stack_t *curr = *stack;
	(void)line_num;

	while (curr != NULL && curr->n != 0 && curr->n >= 0 && curr->n <= 127)
	{
		if (curr->n != 0)
			putchar(curr->n);
		curr = curr->next;
	}
	putchar('\n');
}
