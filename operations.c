/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:25:09 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/24 17:10:10 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_num(t_dual_stack *stack)
{
	int i;
	int j;
	int temp;

	temp = stack->stack_a[0];
	i = 0;
	while (i <= stack->a_top)
	{
		j = 0;
		while(j <= stack->a_top)
		{
			if (stack->stack_a[j] > temp)
				temp = stack->stack_a[j];
			j++;
		}
		i++;
	}
	ft_printf("MAX: %d\n", temp);
	return (temp);
}

static int is_all_ordenate(t_dual_stack *stack)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < stack->a_top) 
	{
		j = 0;
		while (j < stack->a_top)
		{
			if (stack->stack_a[j] > stack->stack_a[j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
static void	operations(t_dual_stack *stack)
{
	int i;
	
	i = 0;
	if (!(is_all_ordenate(stack)))
	{
		if (stack->stack_a[stack->a_top] == stack->max)
		{
			pb(stack);
			stack->max = max_num(stack);

		}
		while (!(stack->stack_a[stack->a_top] == stack->max))
		{
			ra(stack);
			if (stack->stack_a[stack->a_top] == stack->max)
			{
					pb(stack);
					stack->max = max_num(stack);
			}
		}
		while(stack->b_top != -1)
		{
			pa(stack);
		}
	}
}

/* static void	operate_pb(t_dual_stack *stack)
{
	while(stack->b_top != -1)
	{
		ft_printf("entrei");
		ft_printf("entrei");
		pa(stack);
	}
} */


void ordenate(t_dual_stack *stack)
{
	stack->max = max_num(stack);
	if (!(is_all_ordenate(stack)))
	{
		operations(stack);
		//operate_pb(stack);
	}
	else
	{
		ft_printf("Done");
		return;
	}
}