/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:25:09 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/26 00:32:18 by pevaangel        ###   ########.fr       */
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

int min_num(t_dual_stack *stack)
{
	int	i;
	int	j;
	int temp;

	temp = stack->stack_a[0];
	i = 0;
	while (i <= stack->a_top)
	{
		j = 0;
		while(j <= stack->a_top)
		{
			if (stack->stack_a[j] < temp)
				temp = stack->stack_a[j];
			j++;
		}
		i++;
	}
	ft_printf("MIN: %d\n", temp);
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
	if (!is_all_ordenate(stack))
	{
		if ((stack->stack_a[0] == stack->max) && (stack->max != stack->min))
		{
			ra(stack);
			print_stack_a(stack);
			print_stack_b(stack);
		}

		if (stack->stack_a[stack->a_top - 1] == stack->max)
		{
			sa(stack);
			print_stack_a(stack);
			print_stack_b(stack);
		}	
		if (stack->stack_a[stack->a_top] == stack->max)
		{
			pb(stack);
			stack->max = max_num(stack);
			print_stack_a(stack);
			print_stack_b(stack);
		}
		ft_printf("numero de poisicoes da stack_a: %d\n" ,stack->a_top);
		if  (!(is_all_ordenate(stack)))
			operations(stack);		
		while(stack->b_top != -1)
		{
			pa(stack);
			print_stack_a(stack);
			print_stack_b(stack);
		}
		//operations(stack); */
	}
		else
			return ;
}


void ordenate(t_dual_stack *stack)
{
	stack->max = max_num(stack);
	stack->min = min_num(stack);
	if (!(is_all_ordenate(stack)))
	{
		operations(stack);
		//operate_pb(stack);
	}
	else
	{
		ft_printf("\nDone\n");
		return;
	}
}