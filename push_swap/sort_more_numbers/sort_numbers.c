#include "includes/push_swap.h"

void sort_numbers(t_list *stack_a,t_list *stack_b, int size, char *arr)
{
	int	n;
	int	i;
	n = get_median(arr);
	
	i = 0;
	while(i < size)
	{
		if (stack_a->value <= n)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		i++;
	}
	//nochmal das ganze durchfuehren
	//bis 2 oder 3 uebrig sind in stack_a
	//dann rueckfuehrend das selbe machen mit groesser als der median
	// 
	
}

//aufrufen von init_array mit sort_array und is_sorted. dann daraus die mittlere zahl nehmen und immer ueberfuehren. rekursiv?
