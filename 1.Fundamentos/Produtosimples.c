/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: IOT - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel da Cruz Adami
* Prof.: Ana 
*
* Descrição:
* - pede ao usuario dois numeros
* - calcula o produto 
* - mostra ao usuario o produto
*
* Programa: multiplicação de dois numeros 
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //declaração das variaveis 
    int num1 , num2 ;
    int prod;

    //pede ao usuario numeros para multiplicar
    printf("Digite dois numeros inteiro para serem multiplicados:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    //calculo do produto
    prod = num1 * num2;

    //mostra o produto 
    printf("PROD = %d", prod );
    return 0;
}