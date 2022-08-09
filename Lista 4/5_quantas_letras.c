#include <stdio.h>
#include <string.h>

int main(){
    int i1,i2,casos,i,let=0,vog=0,cons=0;
    char vetvog[10] = {'a','e','i','o','u','A','E','I','O','U'};
    char vetcons[42] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
    char vet[10000];
    
    scanf("%d%*c", &casos);
    
    for(i=0;i<casos;i++){
        
        scanf("%[^\n]%*c", vet);
        let = 0;
        vog = 0;
        cons = 0;
        
        for(i1=0;i1<strlen(vet);i1++){
            for(i2=0;i2<10;i2++){
                if(vetvog[i2] == vet[i1]){
                    vog = vog + 1;
                    break;
                }
            }
        }
        for(i1=0;i1<strlen(vet);i1++){
            for(i2=0;i2<42;i2++){
                if(vetcons[i2] == vet[i1]){
                    cons = cons + 1;
                    break;
                }
            }
        }
        let = vog + cons;
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", let,vog,cons);
    }
        
        
        
        
        
        
        
    
    
    
    
    
    
    return 0;
}
