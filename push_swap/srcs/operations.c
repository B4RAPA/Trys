/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabel <lfabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:12:01 by lfabel            #+#    #+#             */
/*   Updated: 2024/07/29 12:15:27 by lfabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

//swaps fuer a&b
int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		tmp;

	head = *stack;
	next = head->next;
	tmp = head->value;
	if (ft_lstsize < 2)
		return (-1);
	if (!head && !next)
		return (0);
	tmp = head->value;
	head->value = head->next->value;
	head->next->value = tmp;
	return (0);
}

int	sa(t_list *stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_list *stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list *stack_a, t_list *stack_b)
{
	if (swap(stack_a) == -1)
		return (-1);
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("ss", 1);
	return (0);
}

//push for a and b
int	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*tmp;
	t_list	*head_from;
	t_list	*head_to;

	if (ft_lstsize(stack_from) == 0)
		return (-1);
	head_from = *stack_from;
	head_to = *stack_to;
	tmp = head_from;
	head_from = head_from->next;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

int	pa(t_list *stack_a, t_list *stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list *stack_a, t_list *stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (1);
	ft_putendl_fd("pb", 1);
	return (0);
}

//rotate a &b
int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	tail = head->prev;
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_list *stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_list *stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list *stack_a, t_list *stack_b)
{
	if (rotate(stack_a) == -1)
		return (-1);
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rr", 1);
	return (0);
}

// reverse rotates
int	rrotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	tail = head->prev;
	tail->prev = NULL;
	tail->next = head;
	head->prev = tail;
	*stack = tail;
	return (0);
}

int	rra(t_list *stack_a)
{
	if (rrotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list *stack_b)
{
	if (rrotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list *stack_a, t_list *stack_b)
{
	if (rrotate(stack_a) == -1)
		return (-1);
	if (rrotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrr", 1);
	return (0);
}
