/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: IOT - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel da Cruz adami
* Prof.: Ana
*
* Descrição:
* Programa: Controle de produção agrícola
* Objetivo:
* - pede duas notas e depois ve se elas estao entre 0 e 10
* - Dai calcula a media e mostra ao usuario
*
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //Declaração de variaveis
    double num1, num2, media;

    //pede ao usuario duas notas
    printf ("Digite a primeira nota: ");
    scanf ("%lf", &num1);

    printf ("Digite a segunda nota: ");
    scanf ("%lf", &num2);

    //verifica se a notas esta entre 0 e 10 
    if (num1 <= 10 && num1 >= 0)
    {
        if (num2 <= 10 && num2 >= 0)
        {
            //Calculo da media
            media = ((num1 * 3.5) + (num2 * 7.5)) / 11;
        }
    }
    
    //mostra a media para o usuario 
    printf ("Média: %.4lf\n",media);
    return 0;
}