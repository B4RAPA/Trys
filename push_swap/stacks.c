#include "includes/push_swap.h"

//init stacks
void init_stack(int argc, char **argv, t_list *stack_a)
{
	int		i;
	char	**args;
	t_list	*new;

	args = argv;
	i = 1;
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack_a, new);
		stack_a = stack_a->next;
		i++;
	}
	// muss hier was von wegen index hin? weil warum is der index relevant
}

//stack in array kopieren um mitte zu finden usw
char init_array(int argc, char **argv)
{
	char	*array;
	int		i;
	int		j;
	char	**args;

	i = 1;
	j = 0;
	while (args[i])
	{
		array[j] = args[i];
		i++;
		j++;
	}
	return (array);
}

//stack ausgabe nach dem sortieren
void print_stack(t_list *stack_a)
{

}
