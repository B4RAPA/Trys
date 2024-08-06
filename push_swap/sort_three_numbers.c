
#include "includes/push_swap.h"

int is_sorted(t_list *stack)
{
	if ((stack->value < stack->next->value)//1 2 3
		&& (stack->next->value < stack->prev->value))
		return (1); //dann muss ja nix gemacht werden
	else if((stack->value > stack->next->value)// 2 1 3
		&& (stack->next->value < stack->prev->value)
		&& (stack->value < stack->prev->value))
		return(2);
	else if((stack->value < stack->next->value)//2 3 1
		&& (stack->next->value > stack->prev->value)
		&& (stack->value > stack->prev->value))
		return(3);
	else if((stack->value > stack->next->value)//3 2 1
		&& (stack->next->value > stack->prev->value)
		&& (stack->value > stack->prev->value))
		return(4);
	else if((stack->value < stack->next->value)//1 3 2
		&& (stack->next->value < stack->prev->value)
		&& (stack->value < stack->prev->value))
		return(5);
	else
		return (6);
}

void	sort_three_numbers(t_list **stack)
{
	if (stack_size(*stack) == 2 && (*stack)->value > (*stack)->next->value)
	{
		sa(stack, 1);
		return ;
	}
	if (is_sorted(*stack) == 1)
		return ;
	else if (is_sorted(*stack) == 2)
		sa(stack, 1);
	else if (is_sorted(*stack) == 3)
	{
		rra(stack, 1);
	}
	else if (is_sorted(*stack) == 4)
	{
		sa(stack, 1);
		rra(stack);
	}
	else if (is_sorted(*stack) == 5)
	{
		ra(stack, 1);
		sa(stack , 1);
	}
	else
		ra(stack);
}
