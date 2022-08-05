#include <stdio.h>
     
int main() {
    int n, num, primo=2, div, confdiv ,cont=0, cont2, confprimo;
    
    while (1) {
        scanf("%d", &n);
        if (n < 2) printf("Fatoracao nao e possivel para o numero %d!\n", n);
        else break;
    } 
    num = n;
    while (num != 1) {
     
        div = primo;
        confprimo = 1;
        while (div > 1) {
            if (primo % div == 0) {
                if (div != primo) confprimo = 0;
            }
            if (confprimo == 1) break;
            div--;
        }
        if (num % primo == 0) {
            confdiv = 1;
        }
        cont2 = 0;
        while (confdiv == 1) {
            if ((cont != 0) && (cont2 != 0) && (num != 1)) printf(" x ");
            else if ((num != 1) && (cont == 0)) printf("%d = ", n);
            if (num % primo == 0) {
                printf("%d", primo);
                num = num / primo;
            } else confdiv = 0;
            cont++;
            cont2++;
        }
        primo++;
    }
    return 0;
}