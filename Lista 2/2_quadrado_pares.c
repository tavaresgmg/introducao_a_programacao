#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int c, C, p;

    scanf("%d", &n);

    for (c=2;c<=n;c=c+2){
        C = c;
        p = pow(c,2);
        printf("%d^2 = %d\n", C,p);
    }

    return 0;
}
