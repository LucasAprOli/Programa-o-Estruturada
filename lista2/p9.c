#include <stdio.h>

int somaNumImp(int *ptx, int *pty, int reserva){
    int soma = 0;
    if(*ptx > *pty){
        reserva = *ptx;
        *ptx = *pty;
        *pty = reserva;
    }

    for (int i = *ptx+1; i < *pty; i++){
        if(i%2 != 0) soma += i;
    }

    return soma;
}

int main(){

    int x, y;
    scanf("%i %i", &x, &y);

    printf("%i\n", somaNumImp(&x, &y, 0));

    return 0;
}