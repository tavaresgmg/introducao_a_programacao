#include <stdio.h>

int main(){
    int i,j,k,qtd, cont=0,contgeral=0;
    int vet[5000];
    
    scanf("%d", &qtd);
    
    for(i=0;i<qtd;i++){
        scanf("%d", &vet[i]);
    }
    
    for(j=0;j<qtd;j++){
        cont = 0;
        for(k=0;k<qtd;k++){
            if (k == j) continue;
            if(vet[j] == vet[k]) cont++;
        }
        if (cont == 0 ){
            contgeral++;
        }
    }
    printf("%d\n", contgeral);
    
    
    
    
    return 0;
}
