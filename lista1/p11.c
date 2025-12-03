#include <stdio.h>

int main() {
    int a = 0, b = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    int soma = 0;
    int menor, maior;

    if (a > b) {
        menor = b;
        maior = a;
    } else {
        menor = a;
        maior = b;
    }

    for (int n = menor + 1; n < maior; n++) {
        if (n % 2 != 0) {
            soma += n;
        }
    }

    printf("Resultado soma: %d\n", soma);

    return 0;
}
