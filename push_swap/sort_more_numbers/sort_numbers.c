#include "push_swap.h"

void sort_numbers(stack_a, stack_b, size)
{
	while (size > 5)
	{
		pa(stack_a, stack_b);
	}
	if (size <= 5)
		sort_five(stack_a, stack_b);
	
}

/*überführen des stacks in ein array wie geht das?*/