/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:07:43 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:29:46 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node **first_node)
{
	t_node	*tmp;
	
	tmp = (*first_node)->next;
	if (*first_node == NULL || (*first_node)->next == NULL)
		ft_error("can't swap, either nodes is null\n");
	(*first_node)->next = (*first_node)->next->next;
	tmp->next = *first_node;
	*first_node = tmp;
}

void	ft_rotate(t_node **first_node)
{
	t_node	*tmp;
	t_node	*tmp2;
	
	if (*first_node == NULL)
		ft_error("cant rotate. first node is null");
	tmp = *first_node;
	tmp2 = (*first_node)->next;
	while (*first_node != NULL)
	{
		if ((*first_node)->next == NULL)
			break ;
		*first_node = (*first_node)->next;
	}
	(*first_node)->next = tmp;
	(*first_node)->next->next = NULL;
	*first_node = tmp2;
}

void	ft_reverse_rotate(t_node **first_node)
{
	t_node	*tmp;
	t_node	*tmp2;
	
	if (*first_node == NULL)
		ft_error("cant reverse rotate, first node is null");
	tmp = *first_node;
	while (*first_node != NULL)
	{
		if ((*first_node)->next->next == NULL)
			break ;
		*first_node = (*first_node)->next;
	}
	tmp2 = (*first_node)->next;
	tmp2->next = tmp;
	(*first_node)->next = NULL;
	*first_node = tmp2;
}

void	ft_push(t_node **first_node_src, t_node **first_node_dst)
{
	t_node	*tmp;
	
	if (*first_node_src == NULL)
		ft_error("cant push. src node is null");
	tmp = *first_node_src;
	*first_node_src = (*first_node_src)->next;
	if (*first_node_dst == NULL)
	{	
		*first_node_dst = tmp;
		(*first_node_dst)->next = NULL;
	}
	else
	{
		tmp->next = *first_node_dst;
		*first_node_dst = tmp;
	}
}
