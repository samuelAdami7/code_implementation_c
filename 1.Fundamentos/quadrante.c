/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: IOT - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Samuel da Cruz Adami
* Prof.: Ana
*
* Objetivo:
* - pede dois numeros do quadrante.
* - identificar qual quadrante pertence os numeros digitados.
*
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //Declaração de variaveis 
    int x , y;

    printf("Quadrante");

    //pede ao usuarios a posição do x e y
    printf("Digite duas posições do plano cartesiano:\n");
    scanf("%d %d", &x, &y);
    while(scanf("%d %d", &x, &y) == 2)
    {
        //usa para verificar se x e y maior que zero 
        if (x == 0 || y == 0) {
            break;
    }
        //verifica em qual quadrante esta o x e y
        if(x > 0 && y > 0)
        {
        printf("Pimeiro Quadrante");
        }
        else if (x < 0 && y > 0)
        {
            printf("Segundo Quadrante");
        }
        else if (x < 0 && y < 0)
        {
            printf("Terceiro Quadrante");
        }
        else if(x > 0 && y > 0)
        {
            printf("Quarto Quadrante");
        }

    }

    return 0;
    
}