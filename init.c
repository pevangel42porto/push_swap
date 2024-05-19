/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   init.c	 :+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: pevangel <pevangel@student.42.fr>	  +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2024/04/19 15:02:03 by pevangel	  #+#	#+#	 */
/*   Updated: 2024/04/19 15:04:49 by pevangel	 ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

#include "push_swap.h"


void	stack_init(t_stack_node **a, char **argv, bool flag_argc_2)
{
	long	nbr;
	int		i;

	i = 0;
	while(argv[i])
	{
		if (error_syntax(argv[1]))
			error_free(a, argv, flag_argc_2);
	}
}




