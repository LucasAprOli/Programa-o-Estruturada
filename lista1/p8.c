#include <stdio.h>

int main() {
    int hIni, mIni;
    int hFim, mFim;

    printf("Digite a hora inicial: ");
    scanf("%d", &hIni);

    printf("Digite o minuto inicial: ");
    scanf("%d", &mIni);

    printf("\nDigite a hora final: ");
    scanf("%d", &hFim);

    printf("Digite o minuto final: ");
    scanf("%d", &mFim);

    int inicioMin = hIni * 60 + mIni;

    if (hFim < hIni) {
        hFim += 24;
    }

    int fimMin = hFim * 60 + mFim;

    int diff = fimMin - inicioMin;

    int horas = diff / 60;
    int minutos = diff % 60;

    printf("\nTempo decorrido foi de: ");
    if (horas != 0) {
        printf("%d Horas ", horas);
    }
    printf("%d Minutos\n", minutos);

    return 0;
}
