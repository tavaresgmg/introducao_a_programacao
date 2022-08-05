#include <stdio.h>

int main(){
    int x,y,aux,i,par;

    scanf("%d%d", &x,&y);
    aux=x;
    par = x%2;
    if(par==0){
        for(i=0;i<y;i++){
            printf("%d ", aux);
            aux=aux+2;
        }
    printf("\n");
    } else {
        printf("O PRIMEIRO NUMERO NAO E PA7R");
    }




    return 0;
}