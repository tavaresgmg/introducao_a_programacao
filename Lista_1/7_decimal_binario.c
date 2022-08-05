#include <stdio.h>

int main(){
    int n,b1,b2,b3,b4,b5,b6,b7,b8;
    
    scanf("%i", &n);

    if ((n>255) || (n<0)){
        printf("Numero invalido!");
    } else {
        b8 = n%2;
        n = n/2;
        b7 = n%2;
        n = n/2;
		b6 = n%2;
		n = n/2;
		b5 = n%2;
        n = n/2;
        b4 = n%2;
        n = n/2;
		b3 = n%2;
		n = n/2;
		b2 = n%2;
		n = n/2;
		b1 = n%2;
		
		printf("%i%i%i%i%i%i%i%i", b1,b2,b3,b4,b5,b6,b7,b8);
    }
    return 0;
}
