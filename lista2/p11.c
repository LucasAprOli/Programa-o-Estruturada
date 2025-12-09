#include <stdio.h>

int cont = 0;

void reduz(int *a, int *b){

    if(*a == *b){
        return;
    }else if(*a > *b){
        *a = (*a)-(*b);
        cont++;
        reduz(a, b);
    }else if(*a < *b){
        *b = (*b)-(*a);
        cont++;
        reduz(a, b);
    }

}

int main(){

    int a, b;
    scanf("%i %i", &a, &b);

    reduz(&a, &b);
    printf("%i", cont);

    return 0;
}