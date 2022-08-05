#include <stdio.h>

int main (){
    //esse programa cria uma ordem crescente com n�meros fornecidos pelo us
    float n1,n2,n3,aux;

    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    if (n1>n3){
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if (n2>n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1>n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }




    printf("%.2f, %.2f, %.2f", n1,n2,n3);

    return 0;
}
