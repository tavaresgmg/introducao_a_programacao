#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[501];
    int cod_cur;
    int qtd_cred;
} aluno;

typedef struct {
    int cod;
    double valor;
    char nome[101];
} curso;

int main() {

    int i,j;
    int n_cursos, n_alunos;
    curso * cursos = NULL;
    aluno * alunos = NULL;

    scanf("%d", &n_cursos);

    cursos = calloc(n_cursos, sizeof(curso));

    for (i = 0; i < n_cursos; i++) {
        scanf("%d", &cursos[i].cod);
        scanf("%lf%*c", &cursos[i].valor);
        scanf("%[^\n]%*c", cursos[i].nome);
    }

    scanf("%d%*c", &n_alunos);

    alunos = calloc(n_alunos, sizeof(aluno));

    for (i = 0; i < n_alunos; i++) {
        scanf("%[^\n]%*c", alunos[i].nome);
        scanf("%d", &alunos[i].cod_cur);
        scanf("%d%*c", &alunos[i].qtd_cred);
    }

    for (i = 0; i < n_alunos; i++) {
        for (j = 0; j < n_cursos; j++) {
            if (alunos[i].cod_cur == cursos[j].cod) {
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf", alunos[i].nome, cursos[j].nome, alunos[i].qtd_cred, cursos[j].valor, alunos[i].qtd_cred*cursos[j].valor);
                break;
            }
        }
        printf("\n");
    }
    
    free(cursos);
    free(alunos);

    return 0;
}