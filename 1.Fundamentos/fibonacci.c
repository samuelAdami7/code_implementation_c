/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: IOT - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel da Cruz adami
* Prof.: Ana
*
* Objetivo:
* Data: 14/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //declaração de variaveis 
    int a = 0, b = 1;
    int i, num, c;

    //pede ao usuario um numero inteiro 
    printf("Digite um numero inteiro:");
    scanf("%d", &num);

    //pede numeros ao usuario que sejam maior que 2
    if(num <= 0 || num == 1)
    {
        printf("Digite so numeros acima de dois");
    }

    num = num - 2;

    //mostra as duas posições fixas do fibonacci
    printf ("%d %d",a,b);

    //mostra a sequencia escolhida pelo usuario
    for(i = 0; i < num; num++)
    {
        c = a + b;

        //mostra o proximo numero da sequencia
        printf (" %d",c); 

        //atualiza os valores
        a = b;
        b = c;
    }

    return 0;
}