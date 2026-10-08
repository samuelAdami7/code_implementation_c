#include <stdio.h>

int main() {
    
    int num1, num2, soma;
    float num3, num4, mult;
    double num5, num6, div;

    printf("Digite dois numeros inteiros para somar:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    soma = num1 + num2;
    
    printf("Digite dois numeros para multiplicacao:\n");
    scanf("%f", &num3);
    scanf("%f", &num4);
    mult = num3 * num4;
    
    
    printf("Digite dois numeros para divisao:\n");
    scanf("%lf", &num5);
    scanf("%lf", &num6);
    div = num5 / num6;

    printf("O resultado da soma e: %d\n", soma);
    printf("O resultado da multiplicacao e: %.2f\n", mult);
    printf("O resultado da divisao e: %.2lf\n", div);

    return 0;
}