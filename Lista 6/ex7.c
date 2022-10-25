#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double n[4];
} pontos;

int main(){
    int i, j;
    int n_entradas;
    pontos * v = NULL;
    double distancia;

    scanf("%d", &n_entradas);

    v = calloc(n_entradas, sizeof(pontos));

    for (i = 0; i < n_entradas; i++) {
        for (j = 0; j < 4; j++) scanf("%lf", &v[i].n[j]);
    }

    for (i = 0; i < (n_entradas-1); i++) {
        distancia = sqrt(pow(v[i].n[0]-v[i+1].n[0], 2) + pow(v[i].n[1]-v[i+1].n[1], 2) + pow(v[i].n[2]-v[i+1].n[2], 2) + pow(v[i].n[3]-v[i+1].n[3], 2));
        printf("%.2lf\n", distancia);
    }

    free(v);

    return 0;
}