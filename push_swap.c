/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:34:56 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/12 17:21:42 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_dual_stack *stack)
{
	if (stack->a_top > 0) {
		int temp = stack->a_array[stack->a_top];
		stack->a_array[stack->a_top] = stack->a_array[stack->a_top - 1];
		stack->a_array[stack->a_top - 1] = temp;
	}
}

void	ra(t_dual_stack *stack)
{
	if (stack->a_top > 0)
	{
		int temp;
		int i;

		temp = stack->a_array[0];
		i = 0;
		while(i < stack->a_top)
		{
			stack->a_array[i] = stack->a_array[i + 1];
			i++;
		}
		stack->a_array[stack->a_top] = temp;
	}
}

void	pa(t_dual_stack *stack)
{
	if (stack->b_top >= 0)
	{
		stack->a_top++;
		stack->a_array[stack->a_top] = stack->b_array[stack->b_top];
		stack->b_top--;
	}
}

void rra(t_dual_stack *stack)
{
	if (stack->a_top > 0)
	{
		int temp = stack->a_array[stack->a_top];
		int i;

		i = stack->a_top;
		while(i > 0)
		{
			stack->a_array[i] = stack->a_array[i - 1];
			i--;
		}
		stack->a_array[0] = temp;
	}
}
int main() {
    t_dual_stack stack;
    stack.size = 10;
    stack.a_top = -1;
    stack.b_top = -1;

    stack.a_array = (int*)malloc(stack.size * sizeof(int));
    stack.b_array = (int*)malloc(stack.size * sizeof(int));

    printf("Insira os elementos da pilha a (insira 0 para parar):\n");
    int num;
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        stack.a_array[++stack.a_top] = num;
    }

    printf("Insira os elementos da pilha b (insira 0 para parar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        stack.b_array[++stack.b_top] = num;
    }

    // Teste as operações sa, ra e pa
    printf("Pilha a antes do sa: ");
    for (int i = 0; i <= stack.a_top; i++) {
        printf("%d ", stack.a_array[i]);
    }
    printf("\n");

    sa(&stack);
    printf("Pilha a depois do sa: ");
    for (int i = 0; i <= stack.a_top; i++) {
        printf("%d ", stack.a_array[i]);
    }
    printf("\n");

    printf("Pilha a antes do ra: ");
    for (int i = 0; i <= stack.a_top; i++) {
        printf("%d ", stack.a_array[i]);
    }
    printf("\n");

    ra(&stack);
    printf("Pilha a depois do ra: ");
    for (int i = 0; i <= stack.a_top; i++) {
        printf("%d ", stack.a_array[i]);
    }
    printf("\n");

    printf("Pilha a antes do pa: ");
    for (int i = 0; i <= stack.a_top; i++) {
        printf("%d ", stack.a_array[i]);
    }
    printf("\n");

    pa(&stack);
    printf("Pilha a depois do pa: ");
    for (int i = 0; i <= stack.a_top; i++) {
        printf("%d ", stack.a_array[i]);
    }
    printf("\n");

    free(stack.a_array);
    free(stack.b_array);

    return 0;
}