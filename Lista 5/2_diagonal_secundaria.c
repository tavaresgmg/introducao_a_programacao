#include <stdio.h>

int main(){
    int matriz[1000][1000];
    int i,j,k,ordem;
    
    scanf("%d", &ordem);
    
    k = ordem - 1;
    
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<ordem;i++){
        printf("%d\n", matriz[i][k]);
        k--;
    }
    

    return 0;
}
