#include <stdio.h>
#include <math.h>

int main(){
    int nvolta;
    double x, rad, N, i, nfat=0, fat, cos=0;
    
    scanf("%lf%lf", &x, &N);

    nvolta = x / (2 * M_PI);
    rad = x - ((M_PI * 2) * nvolta);

    for (i = N + 1; i > 0; i--) {
        if (i == N + 1) fat = 1;
        else {
            fat = fat * (nfat + 1); 
            fat = fat * (nfat + 2);
            nfat = nfat + 2;
        }
        cos = cos + (pow(-1, N - i + 1) * pow(x, 2 * (N - i + 1))) / fat;
    }
    printf("cos(%.2lf) = %.6lf", rad,cos);
    
    return 0;
}