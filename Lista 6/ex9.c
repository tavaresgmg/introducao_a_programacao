#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int num;
    int den;
    double quo;
} fracoes;

int qtd_razoes(char * s);

void monta_razoes(char * s, fracoes * r);

int main() {
    int i, j, k,cont, qtd_r,entradas;
    char buffer[1001];
    fracoes * razoes = NULL;

    scanf("%d%*c", &entradas);

    for (i = 0; i < entradas; i++) {
        scanf("%[^\n]%*c", buffer);
    
        qtd_r = qtd_razoes(buffer);

        razoes = (fracoes *) calloc(qtd_r, sizeof(fracoes));
    
        monta_razoes(buffer, razoes);

        printf("Caso de teste %d\n", i+1);

        cont = 0;
        for (j = 0; j < (qtd_r-1); j++) {
            for (k = j+1; k < qtd_r; k++) {
                if (razoes[j].quo == razoes[k].quo) {
                    printf("%d/%d equivalente a %d/%d\n", razoes[j].num, razoes[j].den, razoes[k].num, razoes[k].den);
                    cont++;
                }
            }
        }

        if (cont == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
    
        free(razoes);
    }

    return 0;
}

int qtd_razoes(char * s) {

    int i = 0;
    int cont_barras = 0;

    while (s[i] != '\0') {

        if (s[i] == '/') cont_barras++;

        i++;
    }

    return cont_barras;
}

void monta_razoes(char * s, fracoes * r) {

    int i = 0, k = 0, j = 0, c = 0, ver = 0,num = 0, dig;

    while(1) {

        if (s[i] >= '0' && s[i] <= '9') {
            k = i;
            while(1) {
                if (s[k] == '/' || s[k] == ' ' || s[k] == '\0') break;
                k++;
            }
            
            num = 0;
            dig = k-i;
            for (j = 0; j < dig; j++) {
                num += (s[i]-48)*pow(10, dig-j-1);
                i++;
            }

            if (ver == 0) {
                r[c].num = num;
                ver++;
            } else {
                r[c].den = num;
                ver--;
                r[c].quo = (double) r[c].num/r[c].den;
                c++;
            }
        }

        if (s[i] == '\0') break;
        i++;
    }
}
