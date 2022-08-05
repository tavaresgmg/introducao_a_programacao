#include <stdio.h>

int main(){
    int k;
    double S=0;
    int n;

    scanf("%d", &n);
    if (n<1){
        printf("Numero invalido!");
    } else{
    for (k=1; k<=n; k++){
        S = S + 1.0/k;
    }
    printf("%.6lf", S);
	}

    return 0;
}
