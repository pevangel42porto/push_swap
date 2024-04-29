/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   init.c	 :+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: pevangel <pevangel@student.42.fr>	  +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2024/04/19 15:02:03 by pevangel	  #+#	#+#	 */
/*   Updated: 2024/04/19 15:04:49 by pevangel	 ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

#include "push_swap.h"



void	init(t_dual_stack *stack)
{
	stack->a_top = -1;
	stack->b_top = -1;
	stack->stack_a = (int*)malloc(MAX_SIZE * sizeof(int));
	stack->stack_b = (int*)malloc(MAX_SIZE * sizeof(int));

	if (stack->stack_a == NULL || stack->stack_b == NULL) 
	{
		printf("Erro ao alocar memória para as pilhas 'a' e 'b'\n");
		exit(EXIT_FAILURE);
	}
}

void cleanup(t_dual_stack *stack)
{
	if (stack != NULL)
	{
		if (stack->stack_a != NULL)
		{
			free(stack->stack_a);
			stack->stack_a = NULL; // Optional: Set the pointer to NULL after freeing
		}
		if (stack->stack_b != NULL)
		{
			free(stack->stack_b);
			stack->stack_b = NULL; // Optional: Set the pointer to NULL after freeing
		}
	}
}


