#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max){

    *min = a;
    *max = a;

    if(b > a) *max = b;
    if(c > a) *max = c;

    if(b < a) *min = b;
    if(c < a) *min = c;
}

int main(){

    int a,b,c,min,max;

    scanf("%i %i %i", &a, &b, &c);
    minMax(a,b,c,&min,&max);

    printf("%i\n%i\n", min, max);

}