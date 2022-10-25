#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    int dia_nasc;
    int mes_nasc;
    int ano_nasc;
    char nome_aln[201];
} aluno;

void troca_prox_aluno(aluno * v);

int main() {

    int i, j;
    int n_alunos;
    aluno * informacoes = NULL;

    scanf("%d", &n_alunos);

    informacoes = calloc(sizeof(aluno), n_alunos);

    for (i = 0; i < n_alunos; i++) {
        scanf("%d", &informacoes[i].matricula);
        scanf("%d %d %d%*c", &informacoes[i].dia_nasc
                , &informacoes[i].mes_nasc, &informacoes[i].ano_nasc);
        scanf("%[^\n]%*c", informacoes[i].nome_aln);
    }

    for (i = 0; i < (n_alunos-1); i++) {
        for (j = 0; j < (n_alunos-1); j++) {
            if(informacoes[j].ano_nasc < informacoes[j+1].ano_nasc) {
                troca_prox_aluno(informacoes+j);
                continue;
            } else if (informacoes[j].ano_nasc == informacoes[j+1].ano_nasc) {
                if (informacoes[j].mes_nasc < informacoes[j+1].mes_nasc) {
                    troca_prox_aluno(informacoes+j);
                    continue;
                } else if (informacoes[j].mes_nasc == informacoes[j+1].mes_nasc) {
                    if (informacoes[j].dia_nasc
             < informacoes[j+1].dia_nasc
            ) {
                        troca_prox_aluno(informacoes+j);
                        continue;
                    }
                }
            } 
        }
    }

    for (i = 0; i < n_alunos; i++) {
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", informacoes[i].matricula, informacoes[i].nome_aln, informacoes[i].dia_nasc
, informacoes[i].mes_nasc, informacoes[i].ano_nasc);
    }

    free(informacoes);

    return 0;
}

void troca_prox_aluno(aluno * v) {

    aluno aux;

    aux = *(v);
    *(v) = *(v+1);
    *(v+1) = aux;
}