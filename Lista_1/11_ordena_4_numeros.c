#include <stdio.h>

int main(){
    float n1,n2,n3,n4,aux,aux1,aux2;

    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);

    if (n1>n3){
        aux = n3;
        n3 = n1;
        n1 = aux;
        }
    if (n2>n3){
        aux = n3;
        n3 = n2;
        n2 = aux;
        }
    if (n1>n2){
        aux = n2;
        n2 = n1;
        n1 = aux;
		}
    if (n4<n1){
        aux = n1;
        aux1 = n2;
        aux2 = n3;
        n1 = n4;
        n2 = aux;
        n3 = aux1;
        n4 = aux2;
    }
    if ((n4>n1) && (n4<n2)){
        aux = n2;
        aux1 = n3;
        n2 = n4;
        n3 = aux;
        n4 = aux1;
    }
    if ((n4<n3) && (n4>n2)){
        aux = n3;
        n3 = n4;
        n4 = aux;
    }

    printf("%.2f, %.2f, %.2f, %.2f", n1,n2,n3,n4);




    return 0;
}