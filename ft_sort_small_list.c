/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:54:09 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:53:43 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two_nodes(t_node **stack_a)
{
		ft_sa(stack_a);
}

void	ft_sort_three_nodes(t_node **stack_a)
{
	while (!ft_check_if_sorted(*stack_a))
	{
		if ((*stack_a)->number > (*stack_a)->next->number)
			ft_sa(stack_a);
		else
			ft_rra(stack_a);
	}
}

void	ft_sort_four_five_nodes(t_node **stack_a, t_node **stack_b)
{
	int	smallest;
	int	rotate_direction;

	while (ft_list_size(*stack_a) > 3)
	{
		smallest = ft_smallest_number(*stack_a);
		rotate_direction = ft_get_rotate_direction(*stack_a);
		while ((*stack_a)->number != smallest)
		{
			if (rotate_direction == 1)
				ft_ra(stack_a);
			else
				ft_rra(stack_a);
		}
		ft_pb(stack_a, stack_b);
	}
	ft_sort_three_nodes(stack_a);
	while (ft_list_size(*stack_b) >= 1)
	{
		ft_pa(stack_a, stack_b);
	}
}

int	ft_get_rotate_direction(t_node *first_node)
{
	int	smallest;
	int	index;
	int	smallest_index;
	int	list_size;

	index = 0;
	smallest_index = 0;
	smallest = 2147483647;
	list_size = ft_list_size(first_node) / 2;
	while (first_node)
	{
		if (first_node->number < smallest)
		{
			smallest = first_node->number;
			smallest_index = index;
		}
		first_node = first_node->next;
		index++;
	}
	if (smallest_index < list_size)
		return (1);
	else
		return (-1);
}
