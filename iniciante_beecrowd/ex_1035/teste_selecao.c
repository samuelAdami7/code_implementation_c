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

 #include <stdio.h>

int main() {

    int a;
    int b;
    int c;
    int d;
    int soma_1;
    int soma_2;

    printf("Digite quatro numeros inteiros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    soma_1 = d + c;
    soma_2 = a + b;

    if(b > c && d > a)
    {
        if(soma_1 > soma_2)
        {
            if(c > 0 && d > 0)
            {
                if(a % 2 == 0)
                {
                    printf("Valores aceitos");
                }
                else
                {
                    printf("Valores nao aceitos");
                }
            }
            else
            {
                printf("Valores nao aceitos");
            }
        }
        else
        {
            printf("Valores nao aceitos");
        }
    }
    else
    {
        printf("Valores nao aceitos");
    }

    return 0;
}