#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k){

	int soma = 0;

    if (k == 0) return 0;

	for(int i = inicio; i <= fim; i++){

		if(i%k == 0) soma += i;

	}

	return soma;

}

int main(){

    int k, inicio, fim;
    scanf("%i", &inicio);
    scanf("%i", &fim);
    scanf("%i", &k);

    printf("%i", somaMultiplos(inicio, fim, k));

}