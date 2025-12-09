#include <stdio.h>

int somaDigitos(int n){
	
        if(n/10 < 1){
        
            return n%10;
        
        }else{

            return (n%10) + somaDigitos(n/10);

        }
    
}

int main(){

    int x = 483;

    printf("%i", somaDigitos(x));

}