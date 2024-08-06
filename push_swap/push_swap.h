#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	struct s_list* 	next;
	struct s_list* 	prev;
}				t_list;


void	sort_three_numbers(t_list **stack);
int 	is_sorted(t_list* stack);
void 	push_one(t_list *stack_a, t_list *stack_b);
void 	sort_five(t_list *stack_a, int stack_size);
void 	push_two(t_list *stack_a, t_list *stack_b);
int 	check_stack(t_list *stack_a);

int		ft_lstsize(t_list *lst);
void	ft_putendl_fd(char *s, int fd);
int		ft_atoi(const char *str);
t_list	*ft_lstnew(void *value);
void	ft_lstadd_back(t_list **lst, t_list *new);
char	init_array(int argc, char **argv);
void	init_stack(int argc, char **argv, t_list *stack_a);
void	sort_numbers(t_list *stack_a,t_list *stack_b, int size, char *arr);
int		get_median(char *arr);

#endif
