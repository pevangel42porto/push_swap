/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:36:47 by pevaangel         #+#    #+#             */
/*   Updated: 2024/05/31 12:12:27 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_stack **stack_a, t_stack **stack_b) {
    if (*stack_b) {
        t_stack *temp = *stack_b;
        *stack_b = (*stack_b)->next;
        temp->next = *stack_a;
        *stack_a = temp;
    }
	ft_printf("pa\n");
}
void pb(t_stack **stack_a, t_stack **stack_b) {
    if (*stack_a) {
        t_stack *temp = *stack_a;
        *stack_a = (*stack_a)->next;
        temp->next = *stack_b;
        *stack_b = temp;
    }
	ft_printf("pb\n");
}
void sa(t_stack **stack)
{
    if (*stack && (*stack)->next)
    {
        t_stack *first = *stack;
        t_stack *second = (*stack)->next;
        first->next = second->next;
        second->next = first;
        *stack = second;
    }
	ft_printf("sa\n");
}
void sb(t_stack **stack)
{
    if (*stack && (*stack)->next)
    {
        t_stack *first = *stack;
        t_stack *second = (*stack)->next;
        first->next = second->next;
        second->next = first;
        *stack = second;
    }
	ft_printf("sb\n");
}
void ra(t_stack **stack)
{
    if (*stack && (*stack)->next)
    {
        t_stack *first = *stack;
        t_stack *last = *stack;

        while (last->next)
            last = last->next;

        *stack = first->next;
        first->next = NULL;
        last->next = first;
    }
	ft_printf("ra\n");
}
void rb(t_stack **stack)
{
    if (*stack && (*stack)->next)
    {
        t_stack *first = *stack;
        t_stack *last = *stack;

        while (last->next)
            last = last->next;

        *stack = first->next;
        first->next = NULL;
        last->next = first;
    }
	ft_printf("rb\n");
}

void rra(t_stack **stack)
{
    if (*stack && (*stack)->next)
    {
        t_stack *second_last = NULL;
        t_stack *last = *stack;

        while (last->next)
        {
            second_last = last;
            last = last->next;
        }

        if (second_last)
            second_last->next = NULL;

        last->next = *stack;
        *stack = last;
    }
	ft_printf("rra\n");
}


void rrb(t_stack **stack)
{
    if (*stack && (*stack)->next)
    {
        t_stack *second_last = NULL;
        t_stack *last = *stack;

        while (last->next)
        {
            second_last = last;
            last = last->next;
        }

        if (second_last)
            second_last->next = NULL;

        last->next = *stack;
        *stack = last;
    }
	ft_printf("rrb\n");
}