#include <stdio.h>

int main(){
	
	int num,n1,n2,n3,n4,n5,nt,nc;
	
	
	scanf("%d", &num);
	
	if (num>99999){
		printf("NUMERO INVALIDO");
	}
	
	
	
	if ((num >=0) && (num<=99999)) {
		nt=num;
		
		if (num<=9){
				printf("PALINDROMO");
		}
		else if (num<=99){
			nt = num;
			n1 = num%10;
			num = num/10;
			n2 = num%10;
			
			n1*=10;
			n2*=1;	
			
		
			nc=n1+n2;
			
		}
			
		else if (num<=999){
			n1 = num%10;
			num = num/10;
			n2 = num%10;
			num = num/10;
			n3 = num%10;
			
			n1*=100;
			n2*=10;	
			n3*=1;		
			
			nc=n1+n2+n3;
		}
		else if (num<=9999){
			n1 = num%10;
			num = num/10;
			n2 = num%10;
			num = num/10;
			n3 = num%10;
			num = num/10;
			n4 = num%10;
			
			n1*=1000;
			n2*=100;	
			n3*=10;		
			n4*=1;
		
			nc=n1+n2+n3+n4;
		}
		else if (num<=99999){
			n1 = num%10;
			num = num/10;
			n2 = num%10;
			num = num/10;
			n3 = num%10;
			num = num/10;
			n4 = num%10;
			num = num/10;
			n5 = num%10;
		
			n1*=10000;
			n2*=1000;	
			n3*=100;		
			n4*=10;
			n5*=1;
			
			nc=n1+n2+n3+n4+n5;
		}
		
		if (nt == nc){
				printf("PALINDROMO");
			} else {
				printf("NAO PALINDROMO");
			}
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
