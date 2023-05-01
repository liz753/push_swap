/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:07:30 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 15:14:35 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_create_list(t_node **first_node_a, int argc, char **argv)
{
	char **argsplit;
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		argsplit = ft_split(argv[i++], ' ');
		if (argsplit == NULL)
		{
			ft_free_strarray(argsplit);
			ft_error("argsplit null\n");
		}
		j = 0;
		while (argsplit[j])
		{
			if (ft_isnum(argsplit[j]) && !ft_nb_too_small(argsplit[j]) &&
				!ft_nb_too_big(argsplit[j]))
			{
				*first_node_a = ft_insert_last_unique(*first_node_a,
						ft_atoi(argsplit[j]));
				j++;
			}
			else {
				ft_free_strarray(argsplit);
				ft_error("param invalid\n");
			}
		}
		ft_free_strarray(argsplit);
	}
}

t_node	*ft_insert_last_unique(t_node *first_node, int new_number)
{
	t_node	*new_node;
	t_node	*tmp;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_error("malloc err\n");
	new_node->number = new_number;
	new_node->has_index = false;
	new_node->next = NULL;
	if (first_node == NULL)
	{
		first_node = new_node;
		return (first_node);
	}
	else
	{
		tmp = first_node;
		ft_check_doubles(tmp, new_number);
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
		return (first_node);
	}
}

int	ft_smallest_number(t_node *stack_a)
{
	int smallest;

	smallest = stack_a->number;
	stack_a = stack_a->next;
	while (stack_a != NULL)
	{
		if (stack_a->number < smallest)
			smallest = stack_a->number;
		stack_a = stack_a->next;
	}
	return (smallest);
}

bool	ft_check_if_sorted(t_node *stack_a)
{
	while (stack_a->next != NULL && stack_a->number < stack_a->next->number)
	{
		stack_a = stack_a->next;
	}
	if (stack_a->next == NULL)
		return (true);
	else
		return (false);
}


// void	ft_print_lst(t_node *node)
// {
// 	t_node *tmp;

// 	tmp = node;
// 	while(tmp != NULL)
// 	{
// 		printf("number:%d,index:%d, has_index:%d\n", tmp->number, tmp->index, tmp->has_index);
// 		tmp = tmp->next;
// 	}
// 	printf("---------------\n");
// }