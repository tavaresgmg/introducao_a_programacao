#include <stdio.h>

typedef struct informacoes{
    int matricula;
    int idade;
    int n_filhos;
    char sex;
    double salario;
} inf;

int main(){

    int qtd_funcionarios, i, j, k, caso1=0,caso2=0,caso3=0,caso4=0;
    double media_idade=0, media_filhos=0;
    inf funcionarios[500];

    scanf("%d", &qtd_funcionarios);

    for(i=0;i<qtd_funcionarios;i++){
        scanf("%d %d %d %c %lf", &funcionarios[i].matricula,&funcionarios[i].idade, &funcionarios[i].n_filhos,&funcionarios[i].sex,&funcionarios[i].salario);
    }

    for(j=0;j<qtd_funcionarios;j++){
        
        media_idade = media_idade + funcionarios[j].idade;
        media_filhos = media_filhos + funcionarios[j].n_filhos;
        
    }

    media_idade = media_idade/qtd_funcionarios;
    media_filhos = media_filhos/qtd_funcionarios;



    for(k=0;k<qtd_funcionarios;k++){

        if(funcionarios[k].idade > media_idade && funcionarios[k].salario > 3600){
            caso1++;
        }
        if(funcionarios[k].sex == 'F' && funcionarios[k].n_filhos > media_filhos){
            caso2++;
        }
        if(funcionarios[k].sex == 'M' && funcionarios[k].n_filhos > media_filhos){
            caso3++;
        }
        if(funcionarios[k].idade > 47 && (funcionarios[k].salario/(funcionarios[k].n_filhos+1)) < 2400){
            caso4++;
        }
    }

    printf("%d %d %d %d\n", caso1,caso2,caso3,caso4);

    return 0;
}