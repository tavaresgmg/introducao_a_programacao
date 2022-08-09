#include <stdio.h>

int main(){
    int min_alunos=0,alunos=0,cont=0,i;
    int horarios[1000];
    
    scanf("%d%d", &alunos,&min_alunos);
    
    for(i=0;i<alunos;i++){
        scanf("%d", &horarios[i]);
    }
    
    for(i=0;i<alunos;i++){
        if(horarios[i] <= 0) cont++;
    }
    
    if(cont >= min_alunos){
        printf("NAO\n");
        for(i=alunos-1;i>=0;i--){
            if(horarios[i] <= 0) printf("%d\n", i+1);
        }
    }
    else printf("SIM\n");
    
    
    
    return 0;
}
