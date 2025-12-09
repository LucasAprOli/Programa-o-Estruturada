#include <stdio.h>

int somaDivisores(int a, int d){

    if(d >= a) return 0;

    if(a%d == 0) return d + somaDivisores(a, d+1);
    else return somaDivisores(a, d+1);

}

int amigos(int a, int b){
    return (somaDivisores(a, 1) == b && somaDivisores(b, 1) == a);
}

int main(){

    int a,b;
    scanf("%i %i", &a, &b);

    printf("%i", amigos(a,b));

}