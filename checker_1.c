/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevaangel <pevaangel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:31:43 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/25 16:08:14 by pevaangel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void save_numbers(char *str, t_dual_stack *stack)
{   
    char **substring = ft_split(str, ' '); // Use o caractere de espaço como delimitador

    if (substring == NULL) {
        // Tratamento de erro, se a divisão falhar
        return;
    }

    int i = 0;
    while (substring[i] != NULL) {
        stack->a_top++;
        stack->stack_a[stack->a_top] = ft_atoi(substring[i]);
        i++;
    }

    // Limpeza de memória: libere a memória alocada para o array de substring
    int j = 0;
    while (substring[j] != NULL) {
        free(substring[j]);
        j++;
    }
    free(substring);
}

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
	if (!(is_valid_integer(str)))
	{
		ft_printf("Error: Argument '%s' is not a valid number! \n", str);
		return;
	}
}