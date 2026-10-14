/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: IOT - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel da Cruz Adami 
* Prof.: Osnir
*
* Data: 14/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int valor;

    //pede ao usuario um valor 
    printf("Digite um valor inteiro")
    scanf("%d", &valor);

    //mostra ao usuario o valor 
    printf("%d\n", valor);

    //calcula quantas notas de 100   
    printf("%d nota(s) de R$ 100,00\n", valor / 100);
    valor = valor % 100;

    //calcula quantas notas de 50
    printf("%d nota(s) de R$ 50,00\n", valor / 50);
    valor = valor % 50;

    //calcula quantas notas de 20
    printf("%d nota(s) de R$ 20,00\n", valor / 20);
    valor = valor % 20;

    //calcula quantas notas de 10 
    printf("%d nota(s) de R$ 10,00\n", valor / 10);
    valor = valor % 10;

    //calcula quantas notas de 5
    printf("%d nota(s) de R$ 5,00\n", valor / 5);
    valor = valor % 5;

    //calcula quantas notas de 2
    printf("%d nota(s) de R$ 2,00\n", valor / 2);
    valor = valor % 2;

    //calcula quantas notas de 1
    printf("%d nota(s) de R$ 1,00\n", valor / 1);

    return 0;
}