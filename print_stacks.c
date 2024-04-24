/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:39:15 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/24 17:00:34 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack_a(t_dual_stack *stack)
{
	int i;

	i = 0;
	ft_printf("Stack A: ");
	while (i <= stack->a_top)
	{
		ft_printf("%d ", stack->stack_a[i]);
		i++;
	}
	ft_printf("\n");
}

void	print_stack_b(t_dual_stack *stack)
{
	int i;

	i = 0;
	ft_printf("Stack B: ");
	while (i <= stack->b_top)
	{
		ft_printf("%d ", stack->stack_b[i]);
		i++;
	}
	ft_printf("\n");
}