#include <stdio.h>

int main(){
    int i,n=1,maior=0,cont=0,i2;
    int vet[10000];
    
    while(1){
        
        scanf("%d", &n);
        maior = 0;
        if(n == 0) break;
        
        for(i=0;i<n;i++){
            scanf("%d", &vet[i]);
            if(vet[i]>maior) maior = vet[i];
        }
            
        for(i2=0;i2<=maior;i2++){
            for(i=0;i<n;i++){
                if (i2 >= vet[i]) cont++;
            }
            printf("(%d) %d\n", i2,cont);
            cont = 0;
        }
        
        
        
        
    }
    
    
    
    
    
    
    return 0;
}
