/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:18:21 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/30 18:24:32 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static void	ft_dup(int x, int y)
{
	if (x == y)
	{	
		write (2, "Error\n", 6);
		exit (1);
	}
}

int main(int argc, char **argv)
{
	t_dual_stack stack;

	int i;
	int j;
	
	if (argc >= 2)
	{
		if (argc > 2)
		{
			i = 1;
			while (i < argc)
			{
				is_valid_argument(argv[i]);
				i++;
			}
			i = 1;
			while (i < argc)
			{
				j = i + 1;
				while (j < argc)
				{
					ft_dup(ft_atoi(argv[i]), ft_atoi(argv[j]));
					j++;
				}
				i++;
			}
			init(&stack);
			i = 1;
			j = 0;
			while (i < argc)
			{
				stack.stack_a[j] = ft_atoi(argv[i]);
				i++;
				j++;
			}
			j--;
			stack.a_top = j;
		}
		else if (argc == 2)
		{
			ft_two_spaces(argv[1]);
			init(&stack);
			if (ft_is_empty_sapce_notnumbers(argv[1], &stack) && is_limit_integer(argv[1], &stack))
				save_numbers(argv[1], &stack);
		}
		ordenate(&stack);
		print_stack_a(&stack);
		print_stack_b(&stack);
		cleanup(&stack);
	}
	else
		return (0);
	return (0);
}
