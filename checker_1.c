/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:31:43 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/26 16:32:15 by pevaangel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
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
void is_valid_argument(char *str)
{
	long long number = ft_atol(str);
	
    if (!is_valid_integer(str))
    {
        ft_printf("Error: Argument '%s' is not a valid number! \n", str);
		exit (0);
		return;
    }

    if (number < INT_MIN || number > INT_MAX)
    {
        ft_printf("Error: Argument '%s' is out of range for int! \n", str);
		exit (0);
        return;
    }
}