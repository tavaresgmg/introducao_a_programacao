#include <stdio.h>

int main(){
    int n,nant,qn,i,c=1,cmax=1;
    scanf("%d", &qn);
    for(i=0;i<qn;i++){
        nant = n;
        scanf("%d", &n);
        if(i == 0) {
            continue;
        }
        if(n>nant){
            c++;
        } else {
            
            c = 1;
        }
        if(c>cmax){
            cmax = c;
        }
    }
    printf("O comprimento do segmento crescente maximo e: %d",cmax);




    return 0;
}