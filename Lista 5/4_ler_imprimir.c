#include <stdio.h>

int main(){
    int linhas,colunas,i,j;
    int matriz[10][10];
    
    
    while(1){
        scanf("%d", &linhas);
        if(linhas>0 && linhas<11){
            break;
        }
    }
    while(1){
        scanf("%d", &colunas);
        if(colunas>0 && colunas<11){
            break;
        }
    }
    
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
     
    for(i=0;i<linhas;i++){
        printf("linha %d: ", i+1);
        for(j=0;j<colunas;j++){
            if(j>0) printf(",");
            printf("%d", matriz[i][j]);
            if(j == colunas-1) printf("\n");
            
        }
    }
    
    
    return 0;
}
