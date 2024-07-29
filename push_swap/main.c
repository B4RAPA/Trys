#include "push_swap.h"

int main(int argc, char **argv)
{
	int stack_size;
	t_node *stack_a;
	t_node *stack_b;

	if (argc == 1)
		return (0);
	stack_size = 0;
	while (stack_a)
	{
		stack_size++;
		stack_a = stack_a->next;
	}
	if (stack_size <= 3)
		sort_three_numbers(stack_a);
	if (stack_size > 3 && stack_size <= 5)
		sort_five(stack_a, stack_b);
	else if ( stack_size > 5 )
		sort_stack(stack_a, stack_b, stack_size);
}
/*
ausgabe
stack_a füllen#
die operationen
is die eingabe valide?
für große nummern
*/