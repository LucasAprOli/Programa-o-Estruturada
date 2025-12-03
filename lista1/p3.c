#include <stdio.h>

int main() {
    int velCarA = 60;
    int velCarB = 90;
    float dist = 0.0f;

    printf("Informe a distancia entre os carros: ");
    scanf("%f", &dist);

    float tempoMin = (dist / (velCarA + velCarB)) * 60.0f;

    printf("O tempo sera: %.2f min\n", tempoMin);

    return 0;
}
