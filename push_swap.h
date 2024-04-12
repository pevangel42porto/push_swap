/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:27 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/12 17:01:24 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
#include <stdlib.h>
# include "lib/libft/libft.h"
# include "lib/libft/ft_printf/ft_printf.h"

typedef struct s_dual_stack
{
	int	*a_array;
	int	*b_array;
	int	a_top;
	int	b_top;
	int	size;
}	t_dual_stack;



#endif