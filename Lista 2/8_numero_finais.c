#include <stdio.h>
void contador_finais(int times, int *finais);
int main() {
    int times, finais=0,i=1,j,aux=1,cont_fin=0;

    scanf("%d", &times);
    contador_finais(times, &finais);

    while(1){
        j=aux+1;
        aux++;
        cont_fin++;
        printf("Final %d: Time%d x Time%d\n", cont_fin,i,j);
        if(j==times){
            i++;
            aux=i;
            j=0;
        }
        if(cont_fin==finais) break;
    }
    return 0;
}  
void contador_finais(int times,int *finais){
    int i;
    

    for(i=times-1;i>0;i--){
        *finais = i+*finais;
    }
}