/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_r.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:07:35 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:23:44 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_node **first_node_a)
{
	ft_rotate(first_node_a);
	write (1, "ra\n", 3);
}

void	ft_rb(t_node **first_node_b)
{
	ft_rotate(first_node_b);
	write (1, "rb\n", 3);
}

void	ft_rr(t_node **first_node_a, t_node **first_node_b)
{
	ft_rotate(first_node_a);
	ft_rotate(first_node_b);
	write (1, "rr\n", 3);
}
