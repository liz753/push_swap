/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:07:40 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:23:17 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_node **first_node_a)
{
	ft_swap(first_node_a);
	write (1, "sa\n", 3);
}

void	ft_sb(t_node **first_node_b)
{
	ft_swap(first_node_b);
	write (1, "sb\n", 3);
}

void	ft_ss(t_node **first_node_a, t_node **first_node_b)
{
	ft_swap(first_node_a);
	ft_swap(first_node_b);
	write (1, "ss\n", 3);
}
