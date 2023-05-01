/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:54:07 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:07:52 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_big_list(t_node **stack_a, t_node **stack_b)
{
	int	bit_pos;
	int size; 
	int count;

	size = ft_list_size(*stack_a);
	bit_pos = 1;
	while (ft_check_if_sorted(*stack_a) == false)
	{
		count = 0;
		while (*stack_a != NULL && count++ < size)
		{
			if (((*stack_a)->index & bit_pos) == 0)
			{
				ft_pb(stack_a, stack_b);
			}
			else
				ft_ra(stack_a);
		}
		while (*stack_b != NULL)
		{
			ft_pa(stack_a, stack_b);
		}
		bit_pos *= 2;
	}
}