#include <stdio.h>

int main() {
    float valor = 0.0f;

    printf("Digite o salário: ");
    scanf("%f", &valor);

    if (valor < 1500) {
        valor = valor + valor * 0.20f;
    }
    if (valor >= 1500 && valor <= 5000) {
        valor = valor + valor * 0.15f;
    }
    if (valor > 5000) {
        valor = valor + valor * 0.10f;
    }

    printf("Novo salário: R$ %.2f\n", valor);

    return 0;
}
