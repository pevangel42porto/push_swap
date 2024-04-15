/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:34:56 by pevangel          #+#    #+#             */
/*   Updated: 2024/04/15 18:01:50 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_valid_integer(const char *str) {
    if (*str == '\0') // Se a string estiver vazia, não é um número válido
        return 0;

    // Verifica se o primeiro caractere é '-' (para números negativos) ou um dígito
    if (*str != '-' && (*str < '0' || *str > '9'))
        return 0;

    // Se o primeiro caractere for '-', move para o próximo caractere
    if (*str == '-')
        ++str;

    // Verifica se os caracteres restantes são todos dígitos
    while (*str != '\0') {
        if (*str < '0' || *str > '9')
            return 0;
        ++str;
    }

    return 1; // Se passou por todas as verificações, é um número válido
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./push_swap <number1> <number2> ...\n");
        return 1;
    }

    // Lê os argumentos como números inteiros
    for (int i = 1; i < argc; ++i) {
        if (!is_valid_integer(argv[i])) {
            printf("Invalid argument: %s\n", argv[i]);
            return 1;
        }
        int num = atoi(argv[i]); // Converte o argumento para inteiro
        printf("Argument %d: %d\n", i, num);
    }

    return 0;
}
