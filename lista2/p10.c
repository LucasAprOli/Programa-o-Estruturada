#include <stdio.h>

void fatoresPrimos(int n, int divisor){

    if(n == 1) return;

    if(n > 1){
        if(n%divisor == 0){
            printf("%i\n", divisor);
            fatoresPrimos(n/divisor, divisor);
        }else{
            fatoresPrimos(n, divisor+1);
        }
    }
    
}

int main(){

    int x;
    scanf("%i", &x);

    fatoresPrimos(x, 2);

}