/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:27 by pevangel          #+#    #+#             */
/*   Updated: 2024/05/29 16:41:57 by pevaangel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
# include "lib/libft/libft.h"
# include "lib/libft/ft_printf/ft_printf.h"

# ifndef MAX_SIZE
#  define MAX_SIZE 500
# endif

typedef struct t_stack
{
	int value;
	struct t_stack	*prev;
	struct t_stack	*next;
}	t_stack;

void	stack_init(t_stack **stack_a, char **argv);
void	appendice_node(t_stack **stack, int nbr);
bool 	ft_is_number(char *str);
bool	ft_not_duplicate(t_stack *stack_a, int nbr);
void	error_free(t_stack **stack_a);
void	free_stack(t_stack **stack);
bool	stack_sorted(t_stack *stack);
void	sort_stack(t_stack **stack_a, t_stack **stack_b);

void sa(t_stack **stack);
void sb(t_stack **stack);
void ra(t_stack **stack);
void rb(t_stack **stack);
void rra(t_stack **stack);
void rrb(t_stack **stack);
#endif