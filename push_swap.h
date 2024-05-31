/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:27 by pevangel          #+#    #+#             */
/*   Updated: 2024/05/31 12:38:36 by pevangel         ###   ########.fr       */
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

void	tiny_sort(t_stack **stack_a);
void print_list(t_stack *head);
int	stack_len(t_stack *stack);

void pa(t_stack **stack_a, t_stack **stack_b);
void pb(t_stack **stack_a, t_stack **stack_b);
void sa(t_stack **stack);
void sb(t_stack **stack);
void ra(t_stack **stack);
void rb(t_stack **stack);
void rra(t_stack **stack);
void rrb(t_stack **stack);
#endif