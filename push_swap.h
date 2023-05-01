/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:53:57 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 16:38:58 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libs/libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
// todo remove
#include <stdio.h>

typedef struct s_node
{
	int		number;
	int		index;
	bool	has_index;
	struct s_node *next;
} t_node;

// Error handling
void no_input_error(void);
void ft_error(char *);
void invalid_list_error(void);
bool ft_nb_too_big(char *str);
bool ft_nb_too_small(char *str);

// linkedlist
void	ft_create_list(t_node **first_node_a, int argc, char **argv);
t_node	*ft_insert_last_unique(t_node *first_node, int new_number);
void	ft_check_doubles(t_node *first_node, int new_number);
int		ft_list_size(t_node *first_node);
void	ft_free(t_node *first_node);
void	ft_free_ab(t_node *firs_node_a, t_node *first_node_b);
void	ft_free_strarray(char **strarray);
void	ft_put_index(t_node **first_node, int size);

// operations
void ft_swap(t_node **first_node);
void ft_rotate(t_node **first_node);
void ft_push(t_node **first_node_src, t_node **first_node_dst);
void ft_reverse_rotate(t_node **first_node);
void ft_pa(t_node **first_node_a, t_node **first_node_b);
void ft_pb(t_node **first_node_a, t_node **first_node_b);
void ft_ra(t_node **first_node_a);
void ft_rb(t_node **first_node_b);
void ft_rr(t_node **first_node_a, t_node **first_node_b);
void ft_rra(t_node **first_node_a);
void ft_rrb(t_node **first_node_b);
void ft_rrr(t_node **first_node_a, t_node **first_node_b);
void ft_sa(t_node **first_node_a);
void ft_sb(t_node **first_node_b);
void ft_ss(t_node **first_node_a, t_node **first_node_b);

// sorting
void ft_sort_two_nodes(t_node **stack_a);
void ft_sort_three_nodes(t_node **stack_a);
bool ft_check_if_sorted(t_node *stack_a);
void ft_sort(t_node **stack_a, t_node **stack_b);
void ft_sort_four_five_nodes(t_node **stack_a, t_node **stack_b);
int ft_smallest_number(t_node *stack_a);
int ft_get_rotate_direction(t_node *first_node);
void ft_sort_big_list(t_node **stack_a, t_node **stack_b);

void ft_print_lst(t_node *node);

// bonus
void ft_exec_r(t_node *first_node_a, t_node *first_node_b, char *move);
void ft_execute_swap(t_node *first_node_a, t_node *first_node_b, char *move);
void ft_no_operation(t_node *first_node_a, t_node *first_node_b, char *move);

#endif
