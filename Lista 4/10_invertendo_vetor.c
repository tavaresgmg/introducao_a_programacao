#include <stdio.h>

int main(){
    long int i,qtd,j=0,maior,menor;
    long int vet[1000];
    long int vetinv[1000];
    
    scanf("%ld", &qtd);
    
    for(i=0;i<qtd;i++){
        scanf("%ld", &vet[i]);
    }
    maior = vet [0];
    menor = vet [0];
    
    for(i=qtd-1;i>=0;i--){
        vetinv[j] = vet[i];
        j++;
        if(vet[i] > maior) maior = vet[i];
        if(vet[i] < menor) menor = vet[i];
    }
    
    for(i=0;i<qtd;i++){
        printf("%ld ", vet[i]);
    }
    printf("\n");
    for(i=0;i<qtd;i++){
        printf("%ld ", vetinv[i]);
    }
    printf("\n%ld\n%ld\n",maior, menor);
    
    
    
    
    
    
    
    return 0;
}
