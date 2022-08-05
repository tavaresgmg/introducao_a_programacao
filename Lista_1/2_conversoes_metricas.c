#include <stdio.h>

int main(){

    // Esse programa converte graus celsius em farhrenheit e chuva em polegadas para milimetros.

    float f,c,cp,mm;

    scanf("%f", &f);

    scanf("%f", &cp);

    c = 5*(f-32)/9;

    mm = cp * 25.4;


    printf("O VALOR EM CELSIUS = %.2f\n", c);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", mm);







    return 0;
}
