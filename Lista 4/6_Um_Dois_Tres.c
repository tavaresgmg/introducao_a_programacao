#include <stdio.h>
#include <string.h>
 
int main(){
    char vetone[3] = {'o','n','e'};
    char vettwo[3] = {'t','w','o'};
    char vettexto[5];
    int testes,i,k,contone=0,conttwo=0;
    
    
    scanf("%d", &testes);
    
    for(i=0;i<testes;i++){
        scanf("%s%*c", vettexto);
        contone = 0;
        conttwo = 0;
            if(strlen(vettexto) == 3){
                
                    for(k=0;k<3;k++){
                        if(vetone[k] != vettexto[k]){
                        contone++;
                        }
                    }
                
                    for(k=0;k<3;k++){
                        if(vettwo[k] != vettexto[k]){
                        conttwo++;
                        }
                    }
                
                if(contone > conttwo){
                    printf("2\n");
                } else {
                 printf("1\n");
                }
        
            
            } else {
            printf("3\n");
            }
    }
        
    return 0;
}