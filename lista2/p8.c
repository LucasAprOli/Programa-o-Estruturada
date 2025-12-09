#include <stdio.h>

void contaPos(float x, int *qtd, float *soma) {
    if (x > 0) {
        (*qtd)++;
        (*soma) += x;
    }
}

int main() {
    float valor;
    int qtd = 0;
    float soma = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &valor);
        contaPos(valor, &qtd, &soma);
    }

    if (qtd > 0) {
        printf("%i valores positivos\n", qtd);
        printf("media = %.2f\n", soma / qtd);
    }

    return 0;
}