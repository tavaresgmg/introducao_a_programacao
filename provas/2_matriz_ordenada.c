#include <stdio.h>

int main(){
    int matriz[1000][1000];
    int n,coluna,linha,k,l,swap,linhabx;
    
    scanf("%d", &n);
    
    for(linha=0;linha<n;linha++){
        for(coluna=0;coluna<n;coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(coluna=0;coluna<n;coluna++){
        for(linha=0;linha<n;linha++){
            for(linhabx=linha+1;linhabx<n;linhabx++){
                if(matriz[linha][coluna] > matriz[linhabx][coluna]){
                    swap = matriz[linha][coluna];
                    matriz[linha][coluna] = matriz[linhabx][coluna];
                    matriz[linhabx][coluna] = swap;
                }
            }
        }
    }
    
    for(linha=0;linha<n;linha++){
        printf("\n");
        for(coluna=0;coluna<n;coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
    }
    printf("\n");
    
    
    
    
    
    
    return 0;
}

