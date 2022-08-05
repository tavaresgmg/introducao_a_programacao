#include <stdio.h>

int main(){

    int nfinais, times, i,fat, cont1=1, cont2=1, cont3=0;

    scanf("%d", &times);
    
    if (times < 2) {
        printf("Campeonato invalido!");
    } else {
        while (cont1 < times) {
            for (i = times - cont1; i > 0; i--) {
                printf("Final %d: Time%d X Time%d\n", cont2 + cont3, cont1, cont2 + cont1);
                cont2++;
            }
            cont3 += cont2 - 1;
            cont2 = 1;
            cont1++;
        }
    }
    return 0;
}