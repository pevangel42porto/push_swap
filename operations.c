/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:36:47 by pevaangel         #+#    #+#             */
/*   Updated: 2024/05/29 16:41:18 by pevaangel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void sa(t_stack **stack)
{
    if (*stack && (*stack)->next)
    {
        t_stack *first = *stack;
        t_stack *second = first->next;
        first->next = second->next;
        second->next = first;
        *stack = second;
    }
}
void sb(t_stack **stack)
{
    if (*stack && (*stack)->next)
    {
        t_stack *first = *stack;
        t_stack *second = first->next;
        first->next = second->next;
        second->next = first;
        *stack = second;
    }
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
}