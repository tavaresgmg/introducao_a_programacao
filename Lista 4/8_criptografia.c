#include <stdio.h>
#include <string.h>

int main(){
    int i,casos,j,k,l,m=1,n,max,uso;
    char vet[10000], aux;
    char vetinv[10000];
    char vetlet[52] = {'A','B','C','D','E','F','G','H','I','J',
        'K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    scanf("%d%*c", &casos);
    
    for(i=0;i<casos;i++){
        scanf("%[^\n]%*c", vet);
        max = strlen(vet);
        
        for(j=0;j<max;j++){
            for(k=0;k<52;k++){
                if(vet[j] == vetlet[k]){
                    vet[j] = vet[j]+3;
                    break;
                }
            }
        }
        
        uso = max-1;
        
        for(l=0;l<max/2;l++){
            aux = vet [l];
            vet[l] = vet[uso];
            vet[uso] = aux;
            uso--;
            
        }
        
        for(n=max/2;n<max;n++){
            vet[n] = vet[n]-1;
        }
        
        printf("%s\n", vet);
    }
    
    
    
    return 0;
}
