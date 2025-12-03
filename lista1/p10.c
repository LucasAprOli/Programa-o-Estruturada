#include <stdio.h>
#include <math.h>

int main() {
    float A = 0.0f, B = 0.0f, C = 0.0f;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if (A == 0) {
        printf("Impossível calcular\n");
        return 0;
    }

    float delta = (B * B) - (4 * A * C);

    if (delta < 0) {
        printf("Impossível calcular\n");
        return 0;
    }

    float raizDelta = sqrt(delta);

    float x1 = (-B + raizDelta) / (2 * A);
    float x2 = (-B - raizDelta) / (2 * A);

    printf("R1 = %.5f\n", x1);
    printf("R2 = %.5f\n", x2);

    return 0;
}
