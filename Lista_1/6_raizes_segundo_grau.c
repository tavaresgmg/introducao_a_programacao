#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,x1,x2,bask,baska,baskb;
    double delta, rdelta;

    
    scanf("%f%f%f",&a,&b,&c);

    delta = (b*b)-(4*a*c);

    if (delta == 0) {

        rdelta = sqrt(delta);
        bask = (-b+rdelta)/(2*a);

        printf("RAIZ UNICA\n");
        printf("X1 = %.2f", bask);

        }
    if (delta < 0){

        printf("RAIZES IMAGINARIAS");

        }
    if (delta > 0) {

        rdelta = sqrt(delta);
        baska = (-b-rdelta)/(2*a);
        baskb = (-b+rdelta)/(2*a);



        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2f \nX2 = %.2f", baska, baskb);
        }

return 0;
}
