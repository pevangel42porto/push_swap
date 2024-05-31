/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:27:01 by pevaangel         #+#    #+#             */
/*   Updated: 2024/05/31 12:38:22 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	t_stack	*find_highest(t_stack *stack)
{
	int	highest;
	t_stack	*highest_node;

	if(stack == NULL)
		return (NULL);
	highest = INT_MIN;
	while(stack)
	{
		if (stack->value > highest)
		{
			highest = stack->value;
			highest_node = stack;
		}
		stack = stack->next;
	}
	return (highest_node);
}

void tiny_sort(t_stack **stack_a)
{
	t_stack *highest_node = find_highest(*stack_a);
	
	while (!stack_sorted(*stack_a))
	{
		if (*stack_a == highest_node)
			ra(stack_a);
		else if ((*stack_a)->next == highest_node)
			rra(stack_a);
		else
			sa(stack_a);
	}
}

// Função para verificar se a pilha está ordenada
bool    stack_sorted(t_stack *stack) {
    while (stack && stack->next) {
        if (stack->value > stack->next->value)
            return false;
        stack = stack->next;
    }
    return true;
}