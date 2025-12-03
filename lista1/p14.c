#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o nº 1: ");
    scanf("%d", &a);

    printf("Digite o nº 2: ");
    scanf("%d", &b);

    int maior, menor;

    if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    int total = 0;
    int lista[10];
    int qtd = 0;

    for (int n = maior; n >= menor; n--) {
        if (n < 0) break;

        lista[qtd] = n;
        total += n;
        qtd++;
    }

    printf("\nSoma: %d\n", total);
    printf("Lista dos valores: ");

    for (int k = 0; k < qtd; k++) {
        printf("%d", lista[k]);
        if (k < qtd - 1) {
            printf(", ");
        } else {
            printf("\n");
        }
    }

    return 0;
}
