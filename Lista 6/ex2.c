#include <stdio.h>
#include <stdlib.h>

int conferir_frutas(char * s1, char * s2);

struct feira {
    char fruta[51];
    double valor;
};

typedef struct feira frutas;

int main() {

    int idas, n_frutas_feira, qtd_com, n_frutas, i, j ,k;
    double total;
    frutas * produtos;
    char prod[51];

    scanf("%d", &idas);

    for (i = 0; i < idas; i++) {
        scanf("%d", &n_frutas_feira);
        produtos = (frutas*) malloc(sizeof(frutas));

        for (j = 0; j < n_frutas_feira; j++) scanf("%s%lf", produtos[j].fruta, &produtos[j].valor);
        
        scanf("%d", &qtd_com);

        total = 0;
        for (j = 0; j < qtd_com; j++) {
            scanf("%s%d", prod, &n_frutas);
            for (k = 0; k < n_frutas_feira; k++) {
                if (conferir_frutas(prod, produtos[k].fruta) == 1) {
                    total += n_frutas * produtos[k].valor;
                    break;
                }
            }
        }

        printf("R$ %.2lf\n", total);

        free(produtos);
    }

    return 0;
}

int conferir_frutas(char * s1, char * s2) {

    int i = 0, j = 0;
    int letras_diferentes = 0;

    while(1) {

        if (*(s1+i) != *(s2+j)) letras_diferentes++;

        if (*(s1+i) != '\0') i++;
        if (*(s2+j) != '\0') j++;
        if (*(s1+i) == '\0' && *(s2+j) == '\0') break;
    }

    if (letras_diferentes == 0) return 1;
    else return 0;

}