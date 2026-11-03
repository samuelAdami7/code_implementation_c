/** 
* @file salario.c 
* @brief  programa que leia o número de um funcionário, seu número de horas trabalhadas, 
* o valor que recebe por hora e calcula o salário desse funcionário. 
* @author Samuel da Cruz Adami 
* @date 03/11/2026 
* @version 1.0.0 
*============================================================================== 
* @section DESCRIPTION * 1 - ele pede ao usuario algumas informações 
* 2 - faz um calculo com as informações fornecidas pelo usuario 
* 3 - mostra ao usuario duas informações 
*/

#include <stdio.h>

int main() {

    int horas_trabalhada;
    int num_funcionario;
    float valor_horas;
    float salario_total;

    //printf("Qual o numero do funcionario:\n");
    scanf("%d", &num_funcionario);

    //print("Qual o numero de horas trabalhadas:\n");
    scanf("%d", &horas_trabalhada);

    //printf("Qual o valor recebido por hora:\n");
    scanf("%f", &valor_horas);

    salario_total = valor_horas * horas_trabalhada;

    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %.2f\n", salario_total);

    return 0;
}