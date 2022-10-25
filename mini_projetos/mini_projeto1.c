#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double n1,n2,result;
	int a1,a2;
    char sinal;

    scanf("%lf%c%lf", &n1,&sinal,&n2);
    a1 = n1;
    a2 = n2;

    switch(sinal){
        case'+':
        	result = n1+n2;
            printf("%.2lf", result);
            break;
        case'-':
        	result = n1-n2;
        	printf("%.2lf", result);
        	break;
        case'*':
        	result = n1*n2;
        	printf("%.2lf", result);
        	break;
        case'/':
        	result = n1/n2;
        	printf("%.2lf", result);
        	break;
        case'%':
        	result = a1%a2;
        	printf("%.2lf", result);
        	break;
        case'~':
        	result = pow(n1,n2);
        	printf("%.2lf", result);
        	break; 
        case'=':
			if (n1 == n2){
				printf("true");
			}else{
				printf("false");
			}
			break;
		case'!':					
			if (n1!=n2){
				printf("true");
			}else{
				printf("false");
			}
			break;
		case'<':
			if (n1<n2){
				printf("true");
			}else{
				printf("false");
			}
			break;
		case'>':
			if (n1>n2){
				printf("true");
			}else{
				printf("false");
			}
			break;
		case'^':
			if (a1&a2){
				printf("true");
			} else {
				printf("false");
			}
			break;
		case'v':
			if (n1||n2){
				printf("true");
			} else {
				printf("false");
			}
			break;
		case'x':
			if(a1^a2){
				printf("true");
			} else {
				printf("false");
			}
			break;
        
    }




    return 0;
}
