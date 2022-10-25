#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int i, j, ver,n_imoveis ,soma_consumo=0, soma_moradores=0;
    int n_moradores[1000000] = {0}, consumo[1000000] = {0},con_p[201] = {0};
    double con_m, consumo_medio;

    j = 0;
    while (1) {
        scanf("%d", &n_imoveis);

        if (n_imoveis == 0) break;

        j++;

        for (i = 0; i < n_imoveis; i++) {
            scanf("%d%d", &n_moradores[i], &consumo[i]);
        }

        soma_moradores = 0;
        soma_consumo = 0;

        for(i = 0; i < n_imoveis; i++) {
            con_m = (double) consumo[i] / n_moradores[i];
            con_p[(int) con_m] += n_moradores[i];
            soma_moradores += n_moradores[i];
            soma_consumo += consumo[i];
        }

        consumo_medio = (double) soma_consumo / soma_moradores;

        consumo_medio *= 100;
        consumo_medio = (int) consumo_medio;
        consumo_medio /= 100;

        printf("Cidade# %d:\n", j);
        ver = 0;
        for (i = 0; i < 201; i++) {
            if (con_p[i] != 0) {
                if (ver == 1) printf(" ");
                printf("%d-%d", con_p[i], i);
                ver = 1;            
            }
        }
        printf("\n");
        printf("Consumo medio: %.2lf m3.\n", consumo_medio);
        printf("\n");

        memset(n_moradores, 0, n_imoveis*sizeof(int));
        memset(consumo, 0, n_imoveis*sizeof(int));
        memset(con_p, 0, 201*sizeof(int));
    }

    return 0;
}