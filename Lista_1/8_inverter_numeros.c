#include <stdio.h>
#include <stdlib.h>

int main(){

  int aux, n1, n2, n3;
  
  scanf("%d", &aux);
  if(aux>10)
	{
	  n1=aux%10;
	  aux=aux/10;
	  n2=aux%10;
	  aux=aux/10;
	  n3=aux%10;
	}   
  printf("%d%d%d\n", n1,n2,n3);
  return 0;
}
