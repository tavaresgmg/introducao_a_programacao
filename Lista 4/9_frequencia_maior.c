#include <stdio.h>
#include <string.h>

int main(){
    long int i,qtd,cont=0,maior=0, ind=0;
    long int notas[10000];
    
    scanf("%ld", &qtd);
    
    for(i=0;i<qtd;i++){
        scanf("%ld", &notas[i]);
    }
    
    for(i=0;i<qtd;i++){
        if (notas[i] == notas[qtd-1]) cont++;
        if (notas[i] > maior){
            maior = notas[i];
            ind = i;
        }
    }
    
    printf("Nota %ld, %ld vezes\n", notas[qtd-1],cont);
    printf("Nota %ld, indice %ld\n", maior,ind);
    
    return 0;
}
