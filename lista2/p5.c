#include <stdio.h>

int passos(int n){

    if(n <= 1) return 0;

    if(n%2 == 0) n /= 2;
    else n--;
    
    return 1+passos(n);

}

int main(){

    int x;
    scanf("%i", &x);

    printf("Passos necessarios: %i\n", passos(x));

}