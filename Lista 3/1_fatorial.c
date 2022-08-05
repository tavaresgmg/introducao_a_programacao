#include <stdio.h>

/**
 * Funcao que calcula o fatorial de um numero n
 * @param n um numero inteiro positivo
 * @return o fatorial de n
 */

unsigned long int fat(unsigned int n);

int main(){
    unsigned long int fatorado;
    unsigned int n;

    scanf("%lu", &n);
    fatorado = fat(n);
    printf("%lu! = %lu", n,fatorado);


    return 0;
}

unsigned long int fat (unsigned int n){
    unsigned long int fat=1;

    for(n;n>0;n--){
        fat = fat*n;
    }


    return fat;
}