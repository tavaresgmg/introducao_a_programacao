#include <stdio.h>

int main(){

    float n1,n2,n3, aux;
    int opcao;

    scanf("%i", &opcao);
    scanf("%f%f%f", &n1,&n2,&n3);

    if (opcao == 1){
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
    }
    if (opcao == 2){
        if (n1<n3){
            aux = n3;
            n3 = n1;
            n1 = aux;
        }
        if (n2<n3){
            aux = n3;
            n3 = n2;
            n2 = aux;
        }
        if (n1<n2){
        	aux = n2;
        	n2 = n1;
        	n1 = aux;
		}
    }
    if (opcao == 3){
        if (n3>n2){
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
        if (n1>n2){
            aux = n2;
            n2 = n1;
            n1 = aux;
        }
        if (n1<n3){
        	aux = n3;
        	n3 = n1;
        	n1 = aux;
		}
    }
    printf("%.2f %.2f %.2f", n1,n2,n3);
    return 0;
}
