#include <stdio.h>

int main(){
    int matriz[1000][1000];
    int n,m,i,j,maior,menor,contmaior=0,contmenor=0;
    double percmaior,percmenor;
    
    scanf("%d %d", &n,&m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    menor = matriz[0][0];
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(matriz[i][j] > maior) maior = matriz[i][j];
            if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(matriz[i][j] == maior) contmaior++;
            if(matriz[i][j] == menor) contmenor++;
        }
    }
    
    percmaior = ((double)contmaior/(n*m))*100;
    percmenor = ((double)contmenor/(n*m))*100;
    
    printf("%d %.2lf%%\n", menor,percmenor);
    printf("%d %.2lf%%\n", maior,percmaior);
    
    return 0;
}
