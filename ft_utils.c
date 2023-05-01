/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:54:11 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:16:04 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_put_index(t_node **first_node, int size)
{
	t_node	*smallest_node;
	t_node	*tmp;
	int index;
	int smallest;

	index = 0;
	tmp = *first_node;
	while (index < size)
	{
		smallest = INT_MAX;
		tmp = *first_node;
		while (tmp != NULL)
		{
			if (tmp->number < smallest && tmp->has_index == false)
			{
				smallest_node = tmp;
				smallest = tmp->number;
			}
			tmp = tmp->next;
		}
		smallest_node->index = index;
		smallest_node->has_index = true;
		index++;
	}
}
