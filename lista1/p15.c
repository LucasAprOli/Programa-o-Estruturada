#include <stdio.h>

int main() {
    int qtd = 0;

    printf("Digite o N: ");
    scanf("%d", &qtd);

    for (int k = 0; k < qtd; k++) {
        printf("\nDigite o par %d\n", k + 1);

        float a, b;
        printf("Digite o valor de X: ");
        scanf("%f", &a);

        printf("Digite o valor de Y: ");
        scanf("%f", &b);

        if (b == 0) {
            printf("Divisão impossível quando Y for igual a zero\n");
        } else {
            float div = a / b;
            printf("Resultado X/Y: %.2f\n", div);
        }
    }

    return 0;
}
