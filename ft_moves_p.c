/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:07:33 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:23:47 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_node **first_node_a, t_node **first_node_b)
{
	ft_push(first_node_b, first_node_a);
	write (1, "pa\n", 3);
}

void	ft_pb(t_node **first_node_a, t_node **first_node_b)
{	
	ft_push(first_node_a, first_node_b);
	write (1, "pb\n", 3);
}
