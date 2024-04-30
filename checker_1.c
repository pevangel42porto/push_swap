/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:18:50 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/30 18:32:21 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_valid_integer(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	if (!((str[i] >= '0' && str[i] <= '9') || (str[i] == '-' && (str[i + 1]) != '\0')))
		return (1);	
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (0);
}

void is_valid_argument(char *str)
{
	long long number = ft_atol(str);
	
	if (!is_valid_integer(str))
	{
		write (2, "Error\n", 6);
		exit (1);
	}

	if (number < -2147483648 || number > 2147483647)
	{
		write (2, "Error\n", 6);
		exit (1);
		return;
	}
}