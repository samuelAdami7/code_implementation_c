/**
 *
 * @file valores.c
 * @brief Programa que lê quatro valores inteiros A, B, C e D e verifica
 * se eles atendem às condições estabelecidas para serem aceitos.
 * @author Samuel da Cruz Adami
 * @date 03/11/2026
 * @version 1.0.0
 *==============================================================================
 * @section DESCRIPTION
 * 1 - Solicita ao usuário quatro valores inteiros (A, B, C e D).
 * 2 - Verifica se os valores atendem a todas as condições estabelecidas.
 * 3 - Exibe a mensagem "Valores aceitos" caso todas as condições sejam verdadeiras.
 * 4 - Caso contrário, exibe a mensagem "Valores nao aceitos".
 */

#include <stdio.h> // Biblioteca utilizada para entrada e saída de dados.

int main() {

    // Declaração das variáveis inteiras.
    int a;
    int b;
    int c;
    int d;

    // Variáveis utilizadas para armazenar as somas.
    int soma_1;
    int soma_2;

    // Solicita ao usuário a entrada de quatro números inteiros.
    printf("Digite quatro numeros inteiros:\n");

    // Lê e armazena os valores digitados pelo usuário.
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    // Calcula a soma dos valores C e D.
    soma_1 = d + c;

    // Calcula a soma dos valores A e B.
    soma_2 = a + b;

    // Verifica se B é maior que C e se D é maior que A.
    if(b > c && d > a)
    {
        // Verifica se a soma de C e D é maior que a soma de A e B.
        if(soma_1 > soma_2)
        {
            // Verifica se C e D são maiores que zero.
            if(c > 0 && d > 0)
            {
                // Verifica se o valor A é par.
                if(a % 2 == 0)
                {
                    // Se todas as condições forem verdadeiras,
                    // exibe a mensagem de valores aceitos.
                    printf("Valores aceitos");
                }
                else
                {
                    // Caso A seja ímpar, os valores não são aceitos.
                    printf("Valores nao aceitos");
                }
            }
            else
            {
                // Caso C ou D não sejam positivos, os valores não são aceitos.
                printf("Valores nao aceitos");
            }
        }
        else
        {
            // Caso a soma de C e D não seja maior que a soma de A e B.
            printf("Valores nao aceitos");
        }
    }
    else
    {
        // Caso B não seja maior que C ou D não seja maior que A.
        printf("Valores nao aceitos");
    }

    // Finaliza o programa.
    return 0;
}