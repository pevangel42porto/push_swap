/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:45:29 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/15 15:46:06 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_dual_stack *stack)
{
	int temp;
	if (stack->a_top > 0)
	{
		temp = stack->stack_a[stack->a_top];
		stack->stack_a[stack->a_top] = stack->stack_a[stack->a_top - 1];
		stack->stack_a[stack->a_top - 1] = temp;
	}
}

void	sb(t_dual_stack *stack)
{
	int temp; 
	if (stack->b_top > 0)
	{
		temp = stack->stack_b[stack->b_top];
		stack->stack_b[stack->b_top] = stack->stack_b[stack->a_top - 1];
		stack->stack_b[stack->b_top - 1] = temp;
	}
}

void ss(t_dual_stack *stack)
{
	sa(stack);
	sb(stack);
}

void	ra(t_dual_stack *stack)
{
	if (stack->a_top > 0)
	{
		int temp;
		int i;

		temp = stack->stack_a[0];
		i = 0;
		while(i < stack->a_top)
		{
			stack->stack_a[i] = stack->stack_a[i + 1];
			i++;
		}
		stack->stack_a[stack->a_top] = temp;
	}
}

void rb (t_dual_stack *stack)
{
	if (stack->b_top > 0)
	{
		int temp;
		int i;
	
		temp = stack->stack_b[0];
		i = 0;
		while (i < stack->b_top)
		{
			stack->stack_b[i] =  stack->stack_b[i + 1];
			i++;
		}
		stack->stack_b[stack->b_top] = temp;
	}
}

void	pa(t_dual_stack *stack)
{
	if (stack->b_top >= 0)
	{
		stack->a_top++;
		stack->stack_a[stack->a_top] = stack->stack_b[stack->b_top];
		stack->b_top--;
	}
}

void pb(t_dual_stack *stack)
{
	if (stack->a_top >= 0)
	{
		stack->b_top++;
		stack->stack_b[stack->b_top] = stack->stack_a[stack->a_top];
		stack->a_top--;
	}
}

void rra(t_dual_stack *stack)
{
	int temp;
	int i;

	if (stack->a_top > 0)
	{
		temp = stack->stack_a[stack->a_top];
		i = stack->a_top;
		while (i > 0)
		{
			stack->stack_a[i] = stack->stack_a[i - 1];
			i--;
		}
		stack->stack_a[0] = temp;
	}
}

void rrb(t_dual_stack *stack)
{
	int temp;
	int i;

	if (stack->b_top > 0)
	{
		temp = stack->stack_b[stack->b_top];
		i = stack->b_top;
		while (i > 0)
		{
			stack->stack_b[i] = stack->stack_b[i - 1];
			i--;
		}
		stack->stack_b[0] = temp;
	}
}

void rrr(t_dual_stack *stack)
{
	rrb(stack);
	rra(stack);
}
