#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    int x = 0, y = 0, z = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    if (a < b && a < c) {
        x = a;
        if (b < c) {
            y = b;
            z = c;
        } else {
            y = c;
            z = b;
        }
    }

    if (b < a && b < c) {
        x = b;
        if (a < c) {
            y = a;
            z = c;
        } else {
            y = c;
            z = a;
        }
    }

    if (c < a && c < b) {
        x = c;
        if (a < b) {
            y = a;
            z = b;
        } else {
            y = b;
            z = a;
        }
    }

    printf("\nOrdenado: %d, %d, %d\n", x, y, z);
    printf("Original: %d %d %d\n", a, b, c);

    return 0;
}
