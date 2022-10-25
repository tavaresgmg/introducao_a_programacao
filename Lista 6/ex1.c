#include <stdio.h>

struct fracao {
    double num, den;
};

typedef struct fracao fracao; 

int main(){
    int casos,elementos,i,j,naoex=0,c;
    fracao frac[50];
    double resultado2,resultado1; // matriz de numeradores e denominadores
    
    scanf("%d", &casos);
    
    for(c=1;c<=casos;c++){
        scanf("%d", &elementos);
        
        for(i=0;i<elementos;i++){
            scanf("%lf/%lf", &frac[i].num, &frac[i].den);
        }
        printf("Caso de teste %d\n", c);
        for(i=0;i<elementos-1;i++){
            for(j=i+1;j<elementos;j++){
                resultado1 = frac[i].num/frac[i].den;
                resultado2 = frac[j].num/frac[j].den;
                if(resultado1 == resultado2){
                    naoex++;
                    printf("%.lf/%.lf equivalente a %.lf/%.lf\n", frac[i].num,frac[i].den,frac[j].num,frac[j].den);
                }
            }
        }
        if (naoex == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
        naoex = 0;
        
        
        
        
    }
    return 0;
}
