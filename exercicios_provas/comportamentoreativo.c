#include <stdio.h>
#include <math.h>


int main(){
    double s1,s2,s3,d1,d2,d3,raiz1, raiz2,catop,catop1;
	
	scanf("%f%f%f", &s1,&s2,&s3);

	 d1 = (s1*s1)+(s2*s2);
	 d2 = s2;
	 d3 = (s3*s3)+(s2*s2);
	 
	printf("%f\n%f\n%f\n", d1,d2,d3);

    if ((d1>d2) && (d2>d3)){
        printf("ESQUERDA");
    }
    else if ((d1<d2) && (d2<d3)){
        printf("DIREITA");
    }
    else if ((d1==d3) && (d2==d3)){
        printf("VOLTAR");
    } else {
        printf("PARAR");
    }




    return 0;
}
