#include <stdio.h>

int main() {
    float a, b;

    printf("Digite o valor de x: ");
    scanf("%f", &a);
    printf("Digite o valor de y: ");
    scanf("%f", &b);

    char *msg = " ";

    printf("Localização: ");

    if (a == 0 && b == (int)b && b != 0) {
        printf("Está no eixo Y\n");
    }
    if (b == 0 && a == (int)a && a != 0) {
        printf("Está no eixo X\n");
    }
    if (b > 0 && a > 0) {
        printf("Está no quadrante 1\n");
    }
    if (b > 0 && a < 0) {
        printf("Está no quadrante 2\n");
    }
    if (b < 0 && a < 0) {
        printf("Está no quadrante 3\n");
    }
    if (b < 0 && a > 0) {
        printf("Está no quadrante 4\n");
    }
    if (a == 0 && b == 0) {
        printf("Está na origem\n");
    }

    return 0;
}
