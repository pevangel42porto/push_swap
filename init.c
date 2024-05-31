/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:48:36 by pevaangel         #+#    #+#             */
/*   Updated: 2024/05/29 16:29:20 by pevaangel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack **stack_a, char **argv)
{
	long	nbr;
	int	i;

	i = 0;
	while(argv[i])
	{
		nbr = ft_atol(argv[i]);
		if (!(ft_is_number(argv[i])))
			error_free(stack_a);
		if (nbr < INT_MIN || nbr > INT_MAX)
			error_free(stack_a);
		if(!(ft_not_duplicate(*stack_a, nbr)))
			error_free(stack_a);
		appendice_node(stack_a, (int)nbr);
		i++;
	}
}