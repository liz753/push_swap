/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:54:05 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 16:13:32 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_node **stack_a, t_node **stack_b)
{
	if (ft_check_if_sorted(*stack_a) == true)
		return ;
	else if (ft_list_size(*stack_a) == 1)
		return ;
	else if (ft_list_size(*stack_a) == 2)
		ft_sort_two_nodes(stack_a);
	else if (ft_list_size(*stack_a) == 3)
		ft_sort_three_nodes(stack_a);
	else if (ft_list_size(*stack_a) <= 5)
		ft_sort_four_five_nodes(stack_a, stack_b);
	else 
		ft_sort_big_list(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_node	*first_node_a;
	t_node	*first_node_b;
	int		size;

	first_node_a = NULL;
	first_node_b = NULL;
	if (argc > 1)
	{

		ft_create_list(&first_node_a, argc, argv);
		size = ft_list_size(first_node_a);
		ft_put_index(&first_node_a, size);
		ft_sort(&first_node_a, &first_node_b);
		ft_free(first_node_a);
		ft_free(first_node_b);
	}
	return (0);
}
