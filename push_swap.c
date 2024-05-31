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

void print_list(t_stack *head)
{
    t_stack *current = head;
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
    t_stack *stack_b;
    char    **args;

    stack_a = NULL;
    stack_b = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		return (1);
   
    if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
        args = argv + 1;

    stack_init(&stack_a, args);
    if (!stack_sorted(stack_a))
        sort_stack(&stack_a, &stack_b);
    print_list(stack_a);
    
    free_stack(&stack_a);
	return(0);	
}