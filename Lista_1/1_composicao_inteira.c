#include <stdio.h>

int main(){

    int n1,n2,n3,nt,nq;

    //n1 centena, n2 dezena e n3 unidade;

    
    scanf("%d%d%d", &n1, &n2, &n3);


    if  (((n1>=0) && (n1<=9)) && ((n2>=0) && (n2<=9)) && ((n3>=0) && (n3<=9)))
        {

    n1 = n1*100;
    n2 = n2*10;
    nt = n1+n2+n3;

    printf("%d, ", nt);

    nq = nt*nt;

    printf("%d", nq );
    }
    else
        {
        printf("DIGITO INVALIDO");
    }
    return 0;
}
