#include <stdio.h>

#define PI 3.14159

int main() {
    float r = 0.0f;

    printf("Informe o raio da esfera: ");
    scanf("%f", &r);

    double volume = (4.0 / 3.0) * PI * (r * r * r);

    printf("Volume: %.3f\n", volume);

    return 0;
}
