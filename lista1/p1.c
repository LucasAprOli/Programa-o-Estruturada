#include <stdio.h>

int main() {
    float a, b;
    float pesoA = 3.5f, pesoB = 7.5f;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    float mediaPonderada = (a * pesoA + b * pesoB) / (pesoA + pesoB);

    printf("Resultado: %.2f\n", mediaPonderada);

    return 0;
}
