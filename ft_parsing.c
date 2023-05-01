/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:07:46 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:21:28 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_nb_too_big(char *str)
{
	return ((str[0] != '-' && ft_strlen(str) > 10) ||
		(ft_strlen(str) == 10 && ft_strcmp(str, "2147483647") >= 1));
}

bool	ft_nb_too_small(char *str)
{
	return ((str[0] == '-' && ft_strlen(str) > 11) ||
		(ft_strlen(str) == 11 && ft_strcmp(str, "-2147483648") == 1));
}

int	ft_list_size(t_node *first_node)
{
	int	size;

	size = 0;
	while (first_node != NULL)
	{
		first_node = first_node->next;
		size++;
	}
	return (size);
}

void	ft_check_doubles(t_node *first_node, int new_number)
{
	t_node *tmp;

	tmp = first_node;
	if (new_number == first_node->number)
	{
		free(first_node);
		ft_error("new number is equal to first node number");
	}
	while (tmp->next != NULL)
	{
		if (new_number == tmp->number
			|| new_number == tmp->next->number)
			{
				free(first_node);
				ft_error("new number is equal to node number or next node number");
			}
		tmp = tmp->next;
	}
}
