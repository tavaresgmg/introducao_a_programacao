#include <stdio.h>

typedef struct aposta {
    int numJogo;
    int numero[6];
} cartela;

int main () {
    int i,j,k,n_apostas, acertos=0;
    cartela jogo[10000];
    int sorteados[6];



    scanf("%d", &n_apostas);

    for(i=0;i<n_apostas;i++){
        for(j=0;j<6;j++){
            for(k=0;k<6;k++){
                scanf("%d %d", &jogo->numJogo,&jogo[j].numero[k]);
            }
        }
    }

    for(k=0;k<6;k++){
        scanf("%d", &sorteados[i]);
    }

    for(i=0;i<n_apostas;i++){
        for(j=0;j<6;j++){
            for(k=0;k<6;k++){
                if(sorteados[j] == jogo[i].numero[k]){
                    acertos++;
                    break;
                }
            }
        }
        if(acertos == 4) {
            printf("QUADRA %d: %d %d %d %d/n", i,jogo[i].numero[0],jogo[i].numero[1],jogo[i].numero[2],jogo[i].numero[3]);
            acertos = 0;
            break;
        }
        if(acertos == 5) {
            printf("QUINA %d: %d %d %d %d %d/n", i,jogo[i].numero[0],jogo[i].numero[1],jogo[i].numero[2],jogo[i].numero[3], jogo[i].numero[4]);
            acertos = 0;
            break;
        }
        if(acertos == 6) {
            printf("SENA %d: %d %d %d %d %d %d/n", i,jogo[i].numero[0],jogo[i].numero[1],jogo[i].numero[2],jogo[i].numero[3],jogo[i].numero[5],jogo[i].numero[5]);
            acertos = 0;
            break;
        }
    
    return 0;
}
}