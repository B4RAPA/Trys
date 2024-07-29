#include "push_swap.h"

//sind es 4 oder mehr zahlen in die main mit den zugehörigen aufrufen
int check_stack(t_node *stack_a)
{
	if (stack_a->value < stack_a->next->value
		&& stack_a->next->value < stack_a->next->next->value
		&& stack_a->value < stack_a->prev->value
		&& stack_a->prev->value > stack_a->prev->prev->value)
		return (0);
	else
		return (1);
}

void push_one(t_node *stack_a, t_node *stack_b)
{
	pa(stack_a, stack_b);
	sort_three_numbers(stack_a);
	if (stack_a->prev->value < stack_b->value)
	{
		pb(stack_b, stack_a);
		ra(stack_a);
	}
	while(stack_b)
	{
		if (stack_b-> value <= stack_a->value)
			pb(stack_b, stack_a);
		else if (stack_b->value > stack_a->value)
		{
			ra(stack_a);
		}
	}
}
//der is glaube ich net vollständig
void push_two(t_node *stack_a, t_node *stack_b)
{
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	sort_three_numbers(stack_a);
	if (stack_a->prev->value < stack_b->value)
	{
		pb(stack_b, stack_a);
		ra(stack_a);
	}
	if (stack_a->prev->value < stack_b->next->value)
	{
		rb(stack_b);
		pb(stack_b, stack_a);
		ra(stack_a);
	}
	while(stack_b)
	{
		if (stack_b-> value <= stack_a->value)
			pb(stack_b, stack_a);
		else if (stack_b->value > stack_a->value)
		{
			ra(stack_a);
		}
	}
}

void sort_five(t_node *stack_a, int stack_size)
{
	t_node *stack_b;

	if (stack_size == 4 )
	{
		if (check_stack(stack_a) == 0)
		{
			//stack ausgeben und beenden
		}
		if (check_stack(stack_a) == 1)
			push_one(stack_a, stack_b);	
	}
	else 
	{
		push_two(stack_a, stack_b);
	}
}

