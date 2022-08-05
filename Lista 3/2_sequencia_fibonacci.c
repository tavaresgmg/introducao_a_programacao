#include <stdio.h>

/**
* Retorna o n-ésimo termo da sequência de Fibonacci
* @param t1 primeiro termo da sequência
* @param t2 segundo termo da sequência
* @param n a posição do termo desejado da sequência
* @return o valor do n-ésimo termo da sequência
*/

int fibonacci( int t1, int t2, int n);

int main(){
    int t1,t2,n,resultado;

    scanf("%d%d%d", &t1,&t2,&n);

    resultado = fibonacci(t1,t2,n);

    printf("%d", resultado);

    return 0 ;
}

int fibonacci( int t1, int t2, int n){
    int t3 = 0,i;

    for(i=3;i<=n;i++){

    t3=t1+t2;
    t1=t2;
    t2=t3;
    }

    return t3;
}
