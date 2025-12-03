#include <stdio.h>

int main() {
    int num = 0;

    printf("Digite o valor: ");
    scanf("%d", &num);

    printf("\nTabuada do %d:\n", num);

    for (int k = 1; k <= 20; k++) {
        int resultado = num * k;
        printf("%d x %d = %d\n", num, k, resultado);
    }

    return 0;
}
