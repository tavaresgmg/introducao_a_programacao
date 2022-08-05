#include <stdio.h>

int separaDigitos(int n);

int main(){
    int n, ninv;

    scanf("%d", &n);
    ninv = separaDigitos(n);

    printf("%d", ninv);

    return 0;
}

int separaDigitos(int n){
    int d1,d2,d3,resultado;

    d1 = n/100;
    n = n%100;
    d2 = n/10;
    n= n%10;
    d3 = n;

    d2 = d2*10;
    d3 = d3*100;

    resultado = d1+d2+d3;

    return resultado;
}