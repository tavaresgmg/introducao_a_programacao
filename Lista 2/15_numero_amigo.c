#include <stdio.h>

int sdd(int n);

int main(){
    int num=220, n, sd;
    scanf("%d", &n);
    while (n > 0) {
        sd = sdd(num);        
        if (sdd(sd) == num && num < sd) {
            printf("(%d,%d)\n", num, sd);
            n--;
        }
        num++;
    }
    return 0;
}

int sdd(int n) {
    int divide, somadiv=0;
    for (divide = 1; divide <= n/2; divide++) {
        if (n % divide == 0) somadiv+=divide; 
    }
    return somadiv;
}