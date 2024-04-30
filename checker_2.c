/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:19:02 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/30 18:19:03 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void ft_duplicate(char *str, t_dual_stack *stack)
{
	int	i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && str[i] != '\0')
			{
			print_error_and_exit(stack);
			}
			j++;
		}
		i++;
	}
}




void	free_split(char **substring)
{
	int i;

		i = 0;
	while (substring[i] != NULL)
	{
		free(substring[i]);
		i++;
	}
	free(substring);
}
int  is_limit_integer(char *str, t_dual_stack *stack)
{
	if (ft_atol(str) < -2147483648 || ft_atol(str) > 2147483647)
	{
		write(2 , "Error\n", 6);
		cleanup(stack);
		return (0);
		exit (0);
	}
	return(1);
}



void save_numbers(char *str, t_dual_stack *stack)
{
	char **substring = ft_split(str, ' ');
	int i;
	int result;

	result = 1;
	if (substring == NULL)
	{
		write (2, "Error\n", 6);
		return;
	}
	i = 0;
	while (substring[i] != NULL)
		result = is_limit_integer(substring[i++], stack);
	if (result == 0)
	{
			write(2 , "Error\n", 6);
			cleanup(stack);
			free_split(substring);	
			exit (0);
	}
	while(substring[i] != NULL)
		ft_duplicate(substring[i++], stack);
	i = 0;
	while (substring[i] != NULL)
	{
		stack->a_top++;
		stack->stack_a[stack->a_top] = ft_atoi(substring[i]);
		i++;
	}
	free_split(substring);	
}
