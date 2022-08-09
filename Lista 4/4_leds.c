#include <stdio.h>
#include <string.h>

int main(){
    int i = 0,leds=0,i2,i3,numcasos;
    char vetleds[10] ={6,2,5,5,4,5,6,3,7,6};
    char vetnum[1000000];
    
    
    scanf("%d", &numcasos);
    
    for(i3=1;i3<=numcasos;i3++){
        scanf("%s%*c", vetnum);
        leds = 0;
        
        for(i=0;i<strlen(vetnum);i++){
            
            for(i2=0;i2<11;i2++){
                
                if(vetnum[i]-48 == i2){
                    leds = leds + vetleds[i2];
                    break;
                }
            }
        }
        printf("%d leds\n", leds);
    }
    
    
    
    return 0;
}
