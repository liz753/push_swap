/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:40:24 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 16:42:29 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_ab(t_node *first_node_a, t_node *first_node_b)
{
	ft_free(first_node_a);
	ft_free(first_node_b);
}

void    ft_free(t_node *first_node)
{
	t_node *tmp;
	
	if (first_node == NULL)
		return ;
	while (first_node)
	{
		tmp = first_node;
		first_node = first_node->next;
		free(tmp);
	}
}

/* the last position of strarray[i] is NULL, so it'll get out of the loop */

void	ft_free_strarray(char **strarray)
{
	int	i;

	i = 0;
	while (strarray[i])
	{
		free(strarray[i]);
		i++;
	}
	free(strarray);
}