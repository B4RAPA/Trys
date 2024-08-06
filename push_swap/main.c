#include "includes/push_swap.h"

int main(int argc, char **argv)
{
	int stack_size;
	t_list	*stack_a;
	t_list	*stack_b;
	char	*arr;
	
	if (argc == 1)
		return (0);
	stack_size = 0;
	init_stack(argc, argv, stack_a);
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
	{	
		arr = init_array(argc, argv);
		sort_numbers(stack_a, stack_b, stack_size, arr);
	}	
}
/*
ausgabe
stack_a füllen#
die operationen
is die eingabe valide?
für große nummern
*/
