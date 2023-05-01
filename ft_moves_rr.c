/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:07:38 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:23:38 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_node **first_node_a)
{
	ft_reverse_rotate(first_node_a);
	write (1, "rra\n", 4);
}

void	ft_rrb(t_node **first_node_b)
{
	ft_reverse_rotate(first_node_b);
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_node **first_node_a, t_node **first_node_b)
{
	ft_reverse_rotate(first_node_a);
	ft_reverse_rotate(first_node_b);
	write (1, "rrr\n", 4);
}
