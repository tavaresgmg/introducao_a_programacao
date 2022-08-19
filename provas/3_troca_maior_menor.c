#include <stdio.h>

int main(){
    int matriz[1000][1000];
    int i,j,maior,menor,m,n;
    
    scanf("%d %d", &m,&n);
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    menor = matriz[0][0];
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(matriz[i][j] > maior) maior = matriz[i][j];
            if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(matriz[i][j] == maior) matriz[i][j] = menor;
            else if(matriz[i][j] == menor) matriz[i][j] = maior;
        }
    }
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", matriz[i][j]);
        }
    }
    printf("\n");
    
    
    
    return 0;
}
