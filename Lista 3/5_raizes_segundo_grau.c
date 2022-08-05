#include <stdio.h>
#include <math.h>
    /**Função que calcula as raízes de uma equação de grau 2.
     * @param a: coeficiente quadrado
     * @param b: coeficiente linear
     * @param c: coeficiente constante
     * @param x1: ponteiro para a primeira raiz
     * @param x2: ponteiro para a segunda raiz
     * 
     * @return 0 para raiz única; 1 para raízes distintas; 2 para raízes imaginárias; -1 para coeficientes inválidos (não forma uma equação)
     */
int raizesEq2Grau (double a, double b, double c, double *x1, double*x2);

int main(){
    double a,b,c;
    double x1, x2;
    int r;

    scanf("%lf%lf%lf", &a,&b,&c);

    r = raizesEq2Grau(a,b,c, &x1,&x2);

    if(r==0) {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    } else if (r==1) {
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    } else {
        printf("RAIZES IMAGINARIAS\n");
    }
    return 0;
}
int raizesEq2Grau (double a, double b, double c, double * x1, double * x2){
    double delta = (b*b) - (4*a*c);
    double aux;
    
    if(delta==0){
        if(b==0){
            return -1;
        } else {
            *x1 = -b/(2*a);
            return 0;
        }
    } else if (delta>0){
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = (-b - sqrt(delta))/(2*a);
        if (*x1>*x2){
            aux = *x1;
            *x1 = *x2;
            *x2 = aux;
        }
        return 1;
    } else if (delta<0){
        return 2;
    }
}