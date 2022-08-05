#include <stdio.h>

int main (){
    int pessoas,escola,etnia;
    float renda,bruta;

    scanf("%f %i %i %i", &bruta,&pessoas,&escola,&etnia);

    renda = bruta/pessoas;


    if (escola == 1){
        printf("ALUNO NAO COTISTA");
    }
    else {
        if (renda >= 1405.5){
            if ((etnia == 1) || (etnia == 2) || (etnia == 3)){
                printf("ALUNO COTISTA (L4)");
            }
            else {
                printf("ALUNO COTISTA (L3)");
            }
        }
        else {
            if ((etnia == 1) || (etnia == 2) || (etnia == 3)){
                printf("ALUNO COTISTA (L2)");
            }
            else {
                printf("ALUNO COTISTA (L1)");
            }

        }
    }





    return 0;
}
