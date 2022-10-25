#include <stdio.h>

/**
 * Função que verifica se a matriz é de permutação
 * @param matriz Indica a matriz a ser verificada
 * @param n indica a dimensão da matriz
 * @param soma parâmetro de saída, que armazenará a soma de todos os ’n’ elementos
da matriz.
 * @return int
 */


int ehPermutacao( int matriz[500][500], int n, int *soma );

int main(){
    int matriz[500][500];
    int soma=0,n,i,j,permutacao;
    
    scanf("%d", &n); //Indica a ordem da matriz
    
    for(i=0;i<n;i++){ //Inserção elementos da matriz
        for(j=0;j<n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    permutacao = ehPermutacao(matriz, n, &soma);
    
    printf("%d\n", n);
    if(permutacao == 0) printf("NAO EH PERMUTACAO\n");
    else printf("PERMUTACAO\n");
    printf("%d\n", soma);
    
    
    
    return 0;
}

int ehPermutacao( int matriz[500][500], int n, int *soma ){
    int i,j,cont=0, cont2=0,permutacao=0;
    
    for(i=0;i<n;i++){ //escaneia em busca dos elementos corretos
        for(j=0;j<n;j++){
            if(matriz[i][j] > 1) cont2++;
            if(matriz[i][j] == 1) cont++;
            *soma = *soma + matriz[i][j];
        }
        if(cont > 1) cont2++;
        cont = 0;
    }
    if(cont2 > 0) permutacao = 0;
    else permutacao = 1;
    
    
        
        
    //permutacao = 1 é permutacao
    //permutacao = 0 Nao é permutacao
        
    return permutacao;
}
