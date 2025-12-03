#include <stdio.h>

int main() {
    int vet[10];
    int entrada = 0;

    for (int k = 0; k < 10; k++) {
        printf("Digite o número nº %d: ", k + 1);
        scanf("%d", &entrada);
        vet[k] = entrada;
    }

    int menorValor = vet[0];
    int qtd = sizeof(vet) / sizeof(vet[0]);

    for (int k = 1; k < qtd; k++) {
        if (vet[k] < menorValor) {
            menorValor = vet[k];
        }
    }

    printf("\nMenor valor: %d\n", menorValor);

    for (int k = 0; k < qtd; k++) {
        if (vet[k] == menorValor) {
            printf("Posição: %d\n", k + 1);
            break;
        }
    }

    return 0;
}
