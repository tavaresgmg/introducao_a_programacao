#include <stdio.h>

int main(){
    int n1,n2,n3,aux;
    char x,y,z;

    scanf("%i%i%i", &n1,&n2,&n3);
    scanf(%c%c%c, &x,&y&z);

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

    





    return 0;
}