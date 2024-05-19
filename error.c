/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:10:39 by pevangel          #+#    #+#             */
/*   Updated: 2024/05/19 11:36:25 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_syntax(char *str)
{
	int	i;

	i = 0;
	if (!(str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')))
		return (0);
	if ((str[i] == '+' || str[i] == '-') && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (0);
	while(str[++i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	return(1);
}
int	error_repetition(t_stack_node *a, int nbr)
{
	while(a)
	{
		if (a->value == nbr)
			return(0);
		a = a->next;
	}
	return(1);
}
