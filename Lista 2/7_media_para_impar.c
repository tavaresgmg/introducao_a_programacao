#include <stdio.h>

int main(){
    int n,aux,ipar,iimpar=0;
    double mi,mp,somapar=0,somaimpar=0;
    
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        aux=n%2;

        if(aux==0){
            somapar = somapar + n;
            ipar++;
        } else {
            somaimpar = somaimpar + n;
            iimpar++;
        }
    }
    if(iimpar==0) mi = 0;
    else mi = somaimpar/iimpar;
    if (ipar==0) mp = 0;
    else mp = somapar/ipar;
    
    


    printf("MEDIA PAR: %lf\n", mp);
    printf("MEDIA IMPAR: %lf\n",mi);


    return 0;
}