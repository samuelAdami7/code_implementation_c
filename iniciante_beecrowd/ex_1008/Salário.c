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