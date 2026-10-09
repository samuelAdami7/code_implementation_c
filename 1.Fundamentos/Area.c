/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: IOT - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel da Cruz Adami 
* Prof.: Ana
*
* Descrição:
* - o codigo pede ao usuario o valor do pi 
* - calcula o raio ao quadrado
* - e deposi calcula a area do circulo 
*
* Data: 29/07/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //declaração de variaveis 
    float raio;
    float pi = 3.14159; //inicializa o pi 
    float area;
    float raio2;

    //fala ao usuario sobre sera o codigo
    printf("Calculando a area do circulo:\n");

    //pede ao usuario o valor do raio
    printf("Qual o valor do raio:\n");
    scanf("%f" , &raio);
    //calcula o raio ao quadrado
    raio2 = raio * raio;
    //calculo da area 
    area = pi * raio2;

    //mostra a area do circulo
    printf("O Area do circulo é:%.4f\n", area);
    return 0;
}