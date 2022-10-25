#include <stdio.h>
#include <string.h>

void copia_texto(char * s1, char * s2);

typedef struct {
    int cod;
    double valor;
    char * nome;
} curso;

typedef struct {
    char * nome;
    int cod_cur;
    int qtd_cred;
} aluno;

int main(){
    int i,j,n_cursos, n_alunos;
    curso * cursos = NULL;
    aluno * alunos = NULL;
    char buffer[1001];

    scanf("%d", &n_cursos);

    cursos = calloc(n_cursos, sizeof(curso));

    for (i = 0; i < n_cursos; i++) {
        scanf("%d", &cursos[i].cod);
        scanf("%lf%*c", &cursos[i].valor);
        scanf("%[^\n]%*c", buffer);
        cursos[i].nome = calloc(strlen(buffer)+1, sizeof(char));
        copia_texto(buffer, cursos[i].nome);
    }

    scanf("%d%*c", &n_alunos);

    alunos = calloc(n_alunos, sizeof(aluno));

    for (i = 0; i < n_alunos; i++) {
        scanf("%[^\n]%*c", buffer);
        alunos[i].nome = calloc(strlen(buffer)+1, sizeof(char));
        copia_texto(buffer, alunos[i].nome);
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

    for (i = 0; i < n_cursos; i++) free(cursos[i].nome);
    
    free(cursos);

    for (i = 0; i < n_alunos; i++) free(alunos[i].nome);

    free(alunos);

    return 0;
}

void copia_texto(char * s1, char * s2) {

    int i = 0;

    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
}