#include <stdio.h>

int main(){
    int casos,elementos,i,j,naoex=0,c;
    double matriz[50][50],resultado2,resultado1; // matriz de numeradores e denominadores
    
    scanf("%d", &casos);
    
    for(c=1;c<=casos;c++){
        scanf("%d", &elementos);
        
        for(i=0;i<elementos;i++){
            scanf("%lf/%lf", &matriz[0][i], &matriz[1][i]);
        }
        printf("Caso de teste %d\n", c);
        for(i=0;i<elementos-1;i++){
            for(j=i+1;j<elementos;j++){
                resultado1 = matriz[0][i]/matriz[1][i];
                resultado2 = matriz[0][j]/matriz[1][j];
                if(resultado1 == resultado2){
                    naoex++;
                    printf("%.lf/%.lf equivalente a %.lf/%.lf\n", matriz[0][i],matriz[1][i],matriz[0][j],matriz[1][j]);
                }
            }
        }
        if (naoex == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
        naoex = 0;
        
        
        
        
    }
    return 0;
}
