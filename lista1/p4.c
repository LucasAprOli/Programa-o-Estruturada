#include <stdio.h>

int main() {
    int totalSeg = 0;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalSeg);

    int h = totalSeg / 3600;
    int m = (totalSeg % 3600) / 60;
    int s = m % 60;  // Mantida a mesma lógica do código original

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
