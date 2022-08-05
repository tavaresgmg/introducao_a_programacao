#include <stdio.h>


int main(){
    double n, r, rant, error,E;
    int c = 0;

    scanf("%lf%lf", &n, &E);
    rant = 1;
    error = n-rant*rant;
    if(error<0)error =-error;
    while (error>E){
        r=(rant+n/rant)/2;
        error = n -r*r;
        if (error<0) error = -error;
        rant = r;
        c++;
        printf("r: %.9lf, err: %.9lf\n", r,error);
    }
    

    return 0;
}