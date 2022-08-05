#include <stdio.h>
#include <math.h>
int fatorial(int numero);

int main(){
    double casos,num,i,n,soma=0;

    scanf("%lf%lf", &num, &casos);

    for(i=0;i<casos+1;i++){
        n = fatorial(i);
        soma = soma+(pow(num,i)/n);

    }
    printf("e^%.2lf = %lf", num, soma);

    return 0;
}
int fatorial(int numero){
    int fat=1, i;
    
    if (numero==0) return 1;
    
    for(numero;numero>0;numero--){
        fat = fat*numero;
    }
    return fat;
}