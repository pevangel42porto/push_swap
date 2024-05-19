/* ************************************************************************** */
/*			*/
/*		:::	  ::::::::   */
/*   push_swap.c			:+:	  :+:	:+:   */
/*			+:+ +:	 +:+	 */
/*   By: pevangel <pevangel@student.42.fr	  +#+  +:+	   +#	*/
/*		+#+#+#+#+#+   +#	   */
/*   Created: 2024/04/12 16:34:56 by pevange	  #+#	#+#		 */
/*   Updated: 2024/04/16 13:17:40 by pevange	 ###   ########.fr	   */
/*			*/
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (1 = argc || (2 == argc && !argv[1][0]))
		return(1);
	else if(2 == argc)
		argv = ft_split(argv + 1, ' ');
	stack_init(&a, argv + 1, 2 == argc);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if(stack_len(a) == 3)
			tiny_Sort(&a);
		else
			push_swap(&a, &b);
	}
	free_stack(&a);
}
