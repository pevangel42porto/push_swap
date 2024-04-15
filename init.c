/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:41:35 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/15 15:43:41 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_dual_stack *stack)
{
	stack->stack_a = NULL;
	stack->stack_b = NULL;
	stack->a_top = -1;
	stack->b_top = -1;
	
	
}