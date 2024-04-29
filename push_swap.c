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
	t_dual_stack stack;

	int i;
	int j;
	
	if (argc >= 2)
	{
		if (argc > 2)
		{
			i = 1;
			while (i < argc)
			{
				is_valid_argument(argv[i]);
				i++;
			}
			// verificar a duplicacao
			i = 1;
			while (i < argc)
			{
				j = i + 1;
				while (j < argc)
				{
					if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
					{
						write (2, "Error\n", 6);
						return (0);
					}
					j++;
				}
				i++;
			}
			init(&stack);
			i = 1;
			j = 0;
			while (i < argc)
			{
				stack.stack_a[j] = ft_atoi(argv[i]);
				i++;
				j++;
			}
			j--;
			stack.a_top = j;
		}
		else if (argc == 2)
		{
			init(&stack);
			if (all_numbers(argv[1], &stack) && is_limit_integer(argv[1], &stack) && duplicate(argv[1]))
				save_numbers(argv[1], &stack);
		}
		ordenate(&stack);
		print_stack_a(&stack);
		print_stack_b(&stack);
		cleanup(&stack);
	}
	else
		return (0);
	return (0);
}
