/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:31:43 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/24 17:46:41 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_valid_integer(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	if (!((str[i] >= '0' && str[i] <= '9') || (str[i] == '-' && (str[i + 1]) != '\0')))
		return (0);
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
void	is_valid_argument(char *str)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	if (!(is_valid_integer(str)))
	{
		ft_printf("Error: Argument '%s' is not a valid number! \n", str);
		return;
	}
}