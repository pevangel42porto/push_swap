/* ************************************************************************** */
/*				*/
/*					:::	  ::::::::   */
/*   checker_2.c				:+:	  :+:	:+:   */
/*				+:+ +:+		 +:+	 */
/*   By: pevangel <pevangel@student.42.fr>		  +#+  +:+	   +#+		*/
/*			+#+#+#+#+#+   +#+		   */
/*   Created: 2024/04/26 15:00:45 by pevaangel		 #+#	#+#			 */
/*   Updated: 2024/04/29 14:43:49 by pevangel		 ###   ########.fr	   */
/*				*/
/* ************************************************************************** */

#include "push_swap.h"

int ft_duplicate(char *str)
{
	int	i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && str[i] != '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


int	all_numbers(char *str, t_dual_stack *stack)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] == '-' && str[i - 1] == ' ' )
			i++;
		if ((str[i] < '0' || str[i] > '9') && (str[i] != ' '))
		{
			write (2, "Error\n", 6);
			cleanup(stack);
			exit(0);
			return (0);
		}
		i++;
	}
	return (1);
}

void	free_split(char **substring)
{
	int i;

		i = 0;
	while (substring[i] != NULL)
	{
		free(substring[i]);
		i++;
	}
	free(substring);
}
int  is_limit_integer(char *str, t_dual_stack *stack)
{
	if (ft_atol(str) < -2147483648 || ft_atol(str) > 2147483647)
	{
		write(2 , "Error\n", 6);
		cleanup(stack);
		exit (0);
		return (0);
	}
	return(1);
}


static int  is_limit_int(char *str)
{
	if (ft_atol(str) < -2147483648 || ft_atol(str) > 2147483647)
			return (0);
		return (1);
}
void save_numbers(char *str, t_dual_stack *stack)
{
	char **substring = ft_split(str, ' ');
	int i;
	int result;

	result = 1;
	if (substring == NULL)
	{
		write (2, "Error\n", 6);
		return;
	}
	i = 0;
	while (substring[i] != NULL)
		result = is_limit_int(substring[i++]);
	if (result == 0)
	{
			write(2 , "Error\n", 6);
			cleanup(stack);
			free_split(substring);	
			exit (0);
	}
	i = 0;
	while (substring[i] != NULL)
	{
		stack->a_top++;
		stack->stack_a[stack->a_top] = ft_atoi(substring[i]);
		i++;
	}
	free_split(substring);	
}
