/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:00:45 by pevaangel         #+#    #+#             */
/*   Updated: 2024/04/26 18:35:34 by pevaangel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_numbers(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && (str[i] != ' '))
		{
			ft_printf("Error: this character '%s' not valid!\n", &str[i]);
			exit(0);
			return (0);
		}
		i++;
	}
	return (1);
}

int  is_limit_integer(char *str)
{
    if (ft_atol(str) < -2147483648 || ft_atol(str) > 2147483647)
        {
            ft_printf("Error: Argument '%s' is out of range for int! \n", str);
		    exit (0);
            return (0);
        }
        return(1);
}
static void  is_limit_int(char *str)
{
    if (ft_atol(str) < -2147483648 || ft_atol(str) > 2147483647)
        {
            ft_printf("Error: Argument '%s' is out of range for int! \n", str);
		    exit (0);
            return;
        }
}
void save_numbers(char *str, t_dual_stack *stack)
{   
    char **substring = ft_split(str, ' ');
    int i;
    int j;

    if (substring == NULL)
        return;
    i = 0;
    while (substring[i] != NULL)
        is_limit_int(substring[i++]);
    i = 0;
    while (substring[i] != NULL)
    {
        stack->a_top++;
        stack->stack_a[stack->a_top] = ft_atoi(substring[i]);
        i++;
    }    
    j = 0;
    while (substring[j] != NULL)
    {
        free(substring[j]);
        j++;
    }
    free(substring);
}
