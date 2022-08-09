#include <stdio.h>

int main(){
    int n,qtd = 0,i,cont=0,cont2 = 0;
    int vet[1000];

    while(cont2 == 0){
        scanf("%d", &qtd);
        if(qtd<=1000 && qtd>=1) cont2 = 1;
    }
    
    for(i=0;i<qtd;i++){
        scanf("%d", &vet[i]);
    }

    scanf("%d", &n);

    for(i=0;i<qtd;i++){
        if(n == vet[i] || n < vet[i]) cont++;
    }
    
    printf("%d\n", cont);

    return 0;
}
