/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:27:01 by pevaangel         #+#    #+#             */
/*   Updated: 2024/05/29 16:43:06 by pevaangel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void    sort_stack(t_stack **stack_a, t_stack **stack_b) {
    // Implemente aqui o algoritmo para ordenar as pilhas a e b usando as operações permitidas
    // Este é um exemplo básico que ordena apenas a pilha a usando um algoritmo de seleção
    while (!stack_sorted(*stack_a)) {
        // Implemente o algoritmo de ordenação aqui
        // Este exemplo ordena a pilha a usando um algoritmo de seleção simples
        int min_value = INT_MAX;
        t_stack *current = *stack_a;
        t_stack *min_node = NULL;
        while (current) {
            if (current->value < min_value) {
                min_value = current->value;
                min_node = current;
            }
            current = current->next;
        }
        while (*stack_a != min_node) {
            ra(stack_a);
            //printf("ra\n");
        }
        sa(stack_a);
        //printf("sa\n");
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