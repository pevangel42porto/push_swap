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

int is_valid_integer(const char *str)
{
	if (*str == '\0')
		return (0);
	if (*str != '-' && (*str < '0' || *str > '9'))
		return (0);
	if (*str == '-')
		++str;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		++str;
	}
	return (1);
}

void sortStackA(t_dual_stack *stack)
{
	int min;
	int i;

	min = 0;
	i = 1;
	while (i <= stack->a_top)
	{
		if (stack->stack_a[i] < min)
		{
			min = stack->stack_a[i];
			ft_printf("entrei: )");
		}
		i++;
	}
	// Mova os elementos menores ou iguais a 'min' para a pilha 'b'
	while (stack->a_top >= 0 && stack->stack_a[stack->a_top] <= min)
	{
		if (stack->stack_a[stack->a_top] == min)
		{
			pa(stack); // Se for igual a 'min', mova-o de volta para 'a'
		}
		else
		{
			pb(stack); // Se for menor que 'min', mova-o para 'b'
		}
	}
}

void printStackA(t_dual_stack *stack)
{
	printf("Stack A: ");
	for (int i = 0; i <= stack->a_top; i++)
	{
		printf("%d ", stack->stack_a[i]);
	}
	printf("\n");
}
void printStackB(t_dual_stack *stack)
{
	printf("Stack B: ");
	for (int i = 0; i <= stack->b_top; i++)
	{
		printf("%d ", stack->stack_b[i]);
	}
	printf("\n");
}
#include <stdlib.h> // Incluir o cabeçalho stdlib.h para usar malloc

int main()
{
	// Inicialize a estrutura t_dual_stack com suas pilhas 'a' e 'b'
	t_dual_stack stack;
	stack.a_top = -1;	  // Inicialmente, 'a' está vazia
	stack.b_top = -1;	  // Inicialmente, 'b' está vazia
	stack.stack_a = NULL; // Inicialize os ponteiros para evitar lixo de memória
	stack.stack_b = NULL;

	// Aloque memória para as pilhas 'a' e 'b'
	stack.stack_a = (int *)malloc(MAX_SIZE * sizeof(int)); // Suponha que MAX_SIZE seja o tamanho máximo da pilha 'a'
	stack.stack_b = (int *)malloc(MAX_SIZE * sizeof(int)); // Suponha que MAX_SIZE seja o tamanho máximo da pilha 'b'

	if (stack.stack_a == NULL || stack.stack_b == NULL)
	{
		// Verifique se a alocação de memória foi bem-sucedida
		printf("Erro ao alocar memória para as pilhas 'a' e 'b'\n");
		return 1; // Encerre o programa com um código de erro
	}

	// Exemplo: preencha a pilha 'a' com alguns valores (você pode adaptar conforme necessário)

	stack.stack_a[++stack.a_top] = 9;
	stack.stack_a[++stack.a_top] = 2;
	stack.stack_a[++stack.a_top] = 6;
	stack.stack_a[++stack.a_top] = 7;
	stack.stack_a[++stack.a_top] = 8;


	printf("ESTOREIIII!\n");
	// Antes de ordenar
	printf("Stack A antes da ordenação:\n");
	printStackA(&stack); // Suponha que você tenha uma função printStackA() para imprimir os elementos da pilha 'a'
	printStackB(&stack);
	// Ordenar a pilha 'a' em ordem crescente
	ra(&stack);
	rb(&stack);
	// Após a ordenação
	printf("\nStack A após a ordenação:\n");
	printStackA(&stack); // Imprimir os elementos da pilha 'a' após a ordenação
	printStackB(&stack);

	rrr(&stack);
	printStackA(&stack);
	printStackB(&stack);
	// Libere a memória alocada para as pilhas 'a' e 'b'
	free(stack.stack_a);
	free(stack.stack_b);

	return 0;
}
