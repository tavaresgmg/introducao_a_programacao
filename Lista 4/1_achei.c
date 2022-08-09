#include <stdio.h>

int main(){
    int i,i2,i3,n,qtd,cont=0;
    int vet[100000];
    int ncasos;
    int teste;

    scanf("%d", &qtd);

    for(i=0;i<qtd;i++){
        scanf("%d", &vet[i]);
    }
    scanf("%d", &ncasos);

    for(i2=1;i2<=ncasos;i2++){
        cont = 0;
        scanf("%d", &n);
        for(i = 0; i<qtd;i++){
            if(n == vet[i]){
                printf("ACHEI\n");
                cont = 1;
                break;
            }
        }
        if(cont == 0) printf("NAO ACHEI\n");
    }

    return 0;
}