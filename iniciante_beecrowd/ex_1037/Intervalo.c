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

    float num;

    printf("Digite um numero para achar o intervalo:");
    scanf("%d", &numero);

    if(num >= 0 && num >= 25)
    {
        printf("Intervalo (0,25)]");

        if(num > 25 && >= 50)
        {
            printf("Intervalo (25,50]")
        }
            if(num > 50 && num > 75)   
            {
                printf("Intervalo (50,75]");
            }
                if(num > 75 && num > 100)
                {
                    print("Intervalo (75,100]");
                }
    }else{
        printf(Fora de intervalo);   
    }
        return 0;
}
                