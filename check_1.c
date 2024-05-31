/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:35:15 by pevaangel         #+#    #+#             */
/*   Updated: 2024/05/29 15:40:06 by pevaangel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


bool ft_is_number(char *str)
{
    int i;

    i = 0;
    if (!(str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')))
        return false;
    if ((str[i] == '+' || str[i] == '-') && (!(str[1] >= '0' && str[i] <= '9')))
        return false;
    i++;
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return false;
        i++;
    }
    return true;
}

bool ft_not_duplicate(t_stack *a, int nbr)
{
    if (a == NULL)
        return true;
    while (a)
    {
        if (a->value == nbr)
            return false;
        a = a->next;
    }
    return true;
}