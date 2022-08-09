#include <stdio.h>

int main(){
    int i,qtd;
    int vet[5000];
    
    scanf("%d", &qtd);
    
    for(i=0;i<qtd;i++){
        scanf("%d", &vet[i]);
    }
    
    for(i=qtd-1;i>=0;i--){
        printf("%d ", vet[i]);
    }
    
    return 0;
}
