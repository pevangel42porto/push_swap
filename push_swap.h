/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:27 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/15 16:45:35 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "lib/libft/libft.h"
# include "lib/libft/ft_printf/ft_printf.h"

typedef struct s_dual_stack
{
	int	*stack_a;
	int	*stack_b;
	int	a_top;
	int	b_top;
	int	size;
}	t_dual_stack;

void	init(t_dual_stack *stack);
void sa(t_dual_stack *stack);
void sb(t_dual_stack *stack);
void ss(t_dual_stack *stack);
void pa(t_dual_stack *stack);
void pb(t_dual_stack *stack);
void ra(t_dual_stack *stack);
void rb(t_dual_stack *stack);
void rra(t_dual_stack *stack);
void rrb(t_dual_stack *stack);
void rrr(t_dual_stack *stack);

#endif