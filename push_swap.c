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
		if (argc > 2)// verificar se o argumento e um numero
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
						ft_printf("Error: Duplicate argument %d\n", ft_atoi(argv[i]));
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
		else
		{
			init(&stack);	
			if (all_numbers(argv[1]))
				save_numbers(argv[1], &stack);
		}
		ordenate(&stack);
		print_stack_a(&stack);
		print_stack_b(&stack);
	}
	else
	{
		ft_printf("Error: ./push_swap <values> <values> .. \n");
		return (0);
	}
	return (0);
}
