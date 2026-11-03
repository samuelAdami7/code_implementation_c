/**
 *
 * @file intervalos.c
 * @brief Programa que lê um valor numérico qualquer e verifica em qual
 * dos intervalos estabelecidos ele se encontra.
 * @author Samuel da Cruz Adami
 * @date 03/11/2026
 * @version 1.0.0
 *==============================================================================
 * @section DESCRIPTION
 * 1 - Solicita ao usuário a digitação de um valor numérico.
 * 2 - Verifica em qual dos seguintes intervalos o valor se encontra:
 *     [0,25], (25,50], (50,75] ou (75,100].
 * 3 - Exibe a mensagem correspondente ao intervalo identificado.
 * 4 - Caso o valor não pertença a nenhum dos intervalos, exibe a mensagem
 *     "Fora de intervalo".
 */

 
#include <stdio.h>

int main() {

    // Declara uma variável do tipo float para armazenar um número
    float num;

    // Solicita ao usuário que digite um número
    printf("Digite um numero para achar o intervalo:");

    // Lê o número digitado pelo usuário
    scanf("%d", &numero);

    // Verifica se o número está dentro do primeiro intervalo
    if(num >= 0 && num >= 25)
    {
        // Exibe a mensagem do primeiro intervalo
        printf("Intervalo (0,25)]");

        // Verifica se o número está dentro do segundo intervalo
        if(num > 25 && >= 50)
        {
            // Exibe a mensagem do segundo intervalo
            printf("Intervalo (25,50]")
        }

        // Verifica se o número está dentro do terceiro intervalo
        if(num > 50 && num > 75)   
        {
            // Exibe a mensagem do terceiro intervalo
            printf("Intervalo (50,75]");
        }

        // Verifica se o número está dentro do quarto intervalo
        if(num > 75 && num > 100)
        {
            // Exibe a mensagem do quarto intervalo
            print("Intervalo (75,100]");
        }

    }else{

        // Exibe a mensagem caso o número esteja fora dos intervalos
        printf(Fora de intervalo);   
    }

    // Finaliza o programa
    return 0;
}

                