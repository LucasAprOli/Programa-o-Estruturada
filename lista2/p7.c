#include <stdio.h>

int inverte(int n, int acumulador){

    if(n == 0) return acumulador;
    return inverte(n/10, acumulador*10 + (n%10));
    
}

int ehPalindromo(int n){
    return n == inverte(n, 0);
}

int main(){

    int x;
    scanf("%i", &x);

    printf("%i", ehPalindromo(x));

}