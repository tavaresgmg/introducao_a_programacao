#include <stdio.h>

int main(){
    int n,k;
    unsigned long int f=1;

    scanf("%d", &n);
    for(k=1;k<=n;k++){
        f = f*k;
    }
    printf("%d! = %lu\n", n,f);

    return 0;
}