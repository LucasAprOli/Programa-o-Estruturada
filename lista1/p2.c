#include <stdio.h>

int main() {
    float distancia, combustivel;

    printf("Informe a distância percorrida (KM): ");
    scanf("%f", &distancia);

    printf("Informe o combustível gasto (L): ");
    scanf("%f", &combustivel);

    float consumo = distancia / combustivel;

    printf("Consumo médio: %.3f km/l\n", consumo);

    return 0;
}
