#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct t_node
{
	int value;
	struct t_node* next;
	struct t_node* prev;
}				t_node;


void	sort_three_numbers(t_node **stack);
int 	is_sorted(t_node* stack);
void 	push_one(t_node *stack_a, t_node *stack_b);
void 	sort_five(t_node *stack_a, int stack_size);
void 	push_two(t_node *stack_a, t_node *stack_b);
int 	check_stack(t_node *stack_a);
#endif