#include <stdio.h>

int main(){
    int n,i,i2,num=1, numant=1;

    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("\n%d*%d*%d = ", i,i,i);
        num=numant;
        for(i2=1;i2<=i;i2++){
            if(i2>1)printf("+");
            printf("%d", num);
            num+=2;
            numant = num;
        }
    }

    
    return 0;
}