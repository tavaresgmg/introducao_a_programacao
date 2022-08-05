#include <stdio.h>

int somaDivisores(int n);

int main(){
    int n,i,teste,soma;

    scanf("%d", &n);
    printf("%d = ", n);
    
    for(i=1;i<=n/2;i++){
        teste = n%i;
        if(teste == 0) {
            if(i>1) {
                printf(" + ");
            }
            printf("%d", i);
        }
    }

    soma = somaDivisores(n);

    printf(" = %d", soma);
    
    if(soma == n) printf(" (NUMERO PERFEITO)");
    else printf(" (NUMERO NAO E PERFEITO)");


    return 0;
}

int somaDivisores(int n){
    int soma=0,i, teste;
    for(i=1;i<=n/2;i++){
        teste = n%i;
        if (teste==0) soma = soma+i;
    }

    return soma;
}