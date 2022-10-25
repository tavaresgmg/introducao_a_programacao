#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct vetor {
    double n[4];
    double norma;
};

typedef struct vetor;

void vetor_proximo(vetor * v);

int main () {
    int i, j, entradas;
    vetor * v1;

    scanf("%d", &entradas);

    v1 = malloc(sizeof(vetor)*entradas);

    for(i = 0; i < entradas; i++){
        for(j = 0; j < 4; j++) scanf("%lf", &v1[i].n[j]);
        
        v1[i].norma = sqrt(pow(v1[i].n[0], 2) + pow(v1[i].n[1], 2) + pow(v1[i].n[2], 2) + pow(v1[i].n[3], 2));
    }

    for (i = 0; i < (entradas -1); i++) {
        for (j = 0; j < (entradas-1); j++) {
            if (v1[j].norma > v1[j+1].norma) vetor_proximo(v1+j);
        }
    }

    for (i = 0; i < entradas; i++) {
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", v1[i].n[0], v1[i].n[1], v1[i].n[2], v1[i].n[3], v1[i].norma);
    }
    
    free(v1);

    return 0;
}

void vetor_proximo(vetor * v) {
    int i;
    double aux;

    for (i = 0; i < 4; i++) {
        aux = v[0].n[i];
        v[0].n[i] = v[1].n[i];
        v[1].n[i] = aux;
    }

    aux = v[0].norma;
    v[0].norma = v[1].norma;
    v[1].norma = aux;
}