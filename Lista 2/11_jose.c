#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int inversor_numero(int n);
int comparador_valores(int n1inv,int n2inv);

int main(){
    int casos;
    int n1inv, n2inv,i;
    int numero, num1, num2, escolhido;

    scanf("%d", &casos);

    for(i=1;i<=casos;i++){
        scanf("%d%d", &num1,&num2);
        n1inv =  inversor_numero(num1);
        n2inv =  inversor_numero(num2);
        escolhido = comparador_valores(n1inv,n2inv);
        printf("%d\n", escolhido);
    }
    return 0;
}
int inversor_numero(int n){
    int n1,n2,n3, inverso;

    n1 = n/100;
    n2 = (n%100)/10;
    n3 = n%10;

    n3=n3*100;
    n2=n2*10;
    n1=n1;

    inverso = n3+n2+n1;
    return inverso;
}
int comparador_valores(int n1inv,int n2inv){
    int escolhido;

    if(n1inv>n2inv){
        escolhido = n1inv;
    } else {
        escolhido = n2inv;
    }

    return escolhido;
}