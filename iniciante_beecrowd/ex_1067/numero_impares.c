/**
 *
 * @file impares.c
 * @brief Programa que lê um número inteiro X e mostra todos os números
 * ímpares de 1 até X, apresentando um valor por linha.
 * @author Samuel da Cruz Adami
 * @date 03/11/2026
 * @version 1.0.0
 *==============================================================================
 * @section DESCRIPTION
 * 1 - Lê um valor inteiro X.
 * 2 - Percorre os números de 1 até X.
 * 3 - Identifica os números ímpares.
 * 4 - Exibe os números ímpares, um por linha.
 *
 * @section LIMITES
 * O valor de X deve estar entre 1 e 1000.
 *
 */

#include <stdio.h>

int main() {
    int num; // Armazena o número digitado pelo usuário
    int i;   // Variável usada para controlar o laço

    // Solicita um número ao usuário
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Percorre os números de 0 até o número digitado
    for (i = 0; i <= num; i++) {

        // Verifica se o número é ímpar
        if (i % 2 != 0) {

            // Mostra o número ímpar na tela
            printf("%d\n", i);
        }
    }

    return 0; // Finaliza o programa
}