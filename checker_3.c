/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:11:15 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/30 18:18:07 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_error_and_exit(t_dual_stack *stack)
{
	write(2, "Error\n", 6);
	cleanup(stack);
	exit(1);
}

int	all_numbers(char *str, t_dual_stack *stack)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		print_error_and_exit(stack);
	while (str[i] != '\0')
	{
		if (str[i] == '-' && str[i - 1] == ' ' )
			i++;
		if ((str[i] < '0' || str[i] > '9') && (str[i] != ' '))
			print_error_and_exit(stack);
		i++;
	}
	return (1);
}

int	ft_is_empty_sapce_notnumbers(char *str, t_dual_stack *stack)
{
	int	i;
	int size;
	int spaces;
	
	spaces = 0;
	i = 0;
	if (str[i] == '\0')
		return (0);
	size = ft_strlen(str);
	while(str[i] != '\0')
	{
		if (str[i] == ' ')
			spaces++;
		i++;
	}
	if (size == spaces)
		print_error_and_exit(stack);
	if (!(all_numbers(str, stack)))
		print_error_and_exit(stack);
	return(1);
}

void	ft_two_spaces(char *str)
{
	int i;

	i = 0;

	if (str[i] == '\0')
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	while(str[i] !='\0')
	{
		if ((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == ' ' && str[i + 1] == '\0'))
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		i++;
	}
}